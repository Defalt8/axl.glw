cmake_minimum_required( VERSION 3.10 )

project( axl.glw VERSION 0.6.14 DESCRIPTION "A well organized C++ OpenGL wrangler library" )

# Configure
set( LIBAXLGLW_SUFFIX "" )
set( CMAKE_CXX_STANDARD 11 CACHE STRING "C++ compiler standard.")
set( LIBAXLGLW_TYPE STATIC CACHE STRING "Library type." )
set( HEADERS_INSTALL_DIR "include" CACHE PATH "Relative path for header files to install." )
set( ARCHIVES_INSTALL_DIR "lib" CACHE PATH "Relative path for library archives to install." )
set( BINARY_INSTALL_DIR "bin" CACHE PATH "Relative path for runtime binaries to install." )
set( LIBAXLGLW_EXPORT_DIR "${PROJECT_BINARY_DIR}/tests" CACHE PATH "Binary directory relative path for runtime binaries to build to." )
set( INSTALL_HEADERS ON CACHE BOOL "" )
set( INSTALL_ARCHIVES ON CACHE BOOL "" )
set( INSTALL_BINARIES ON CACHE BOOL "" )
set( INSTALL_TOOLS OFF CACHE BOOL "" )
set( BUILD_TESTS OFF CACHE BOOL "" )
set( BUILD_TOOLS OFF CACHE BOOL "" )
set( LIBAXLGLW_PRINT_CONFIGS OFF CACHE BOOL "" )

if( LIBAXLGLW_PRINT_CONFIGS )
	message( NOTICE "CMAKE_CXX_STANDARD:= ${CMAKE_CXX_STANDARD}" )
	message( NOTICE "LIBAXLGLW_TYPE:= ${LIBAXLGLW_TYPE}" )
	message( NOTICE "CMAKE_BUILD_TYPE:= ${CMAKE_BUILD_TYPE}" )
	message( NOTICE "HEADERS_INSTALL_DIR:= ${HEADERS_INSTALL_DIR}" )
	message( NOTICE "ARCHIVES_INSTALL_DIR:= ${ARCHIVES_INSTALL_DIR}" )
	message( NOTICE "BINARY_INSTALL_DIR:= ${BINARY_INSTALL_DIR}" )
	message( NOTICE "CMAKE_INSTALL_PREFIX:= ${CMAKE_INSTALL_PREFIX}" )
	message( NOTICE "LIBAXLGLW_EXPORT_DIR:= ${LIBAXLGLW_EXPORT_DIR}" )
	message( NOTICE "INSTALL_HEADERS:= ${INSTALL_HEADERS}" )
	message( NOTICE "INSTALL_ARCHIVES:= ${INSTALL_ARCHIVES}" )
	message( NOTICE "INSTALL_BINARIES:= ${INSTALL_BINARIES}" )
	message( NOTICE "INSTALL_TOOLS:= ${INSTALL_TOOLS}" )
	message( NOTICE "BUILD_TESTS:= ${BUILD_TESTS}" )
	message( NOTICE "BUILD_TOOLS:= ${BUILD_TOOLS}" )
endif()

if( "${CMAKE_BUILD_TYPE}" MATCHES "[Dd][Ee][Bb][Uu][Gg]" )
	add_compile_definitions( DEBUG )
elseif( "${CMAKE_BUILD_TYPE}" MATCHES "[Rr][Ee][Ll]" )
	add_compile_definitions( NDEBUG )
endif()

include_directories( include )


add_subdirectory( src "axl.glw" )
if( BUILD_TOOLS )
	add_subdirectory( tools "tools" )
endif()
if( BUILD_TESTS )
	add_subdirectory( tests "tests" )
endif()

# Install
if( INSTALL_HEADERS )
	install( FILES
		"include/axl.glw/lib.hpp"
		"include/axl.glw/platform.h"
		"include/axl.glw/Dummy.hpp"
		"include/axl.glw/glw.hpp"
		"include/axl.glw/gl.hpp"
		"include/axl.glw/glext.hpp"
		"include/axl.glw/gl1.hpp"
		"include/axl.glw/gl2.hpp"
		"include/axl.glw/gl3.hpp"
		"include/axl.glw/gl4.hpp"
		"include/axl.glw/wglext.hpp"
		DESTINATION "${HEADERS_INSTALL_DIR}/axl.glw"
	)
endif()