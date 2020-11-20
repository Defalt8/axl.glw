cmake_minimum_required( VERSION 3.17 )

project( axl.glw VERSION 0.5.9 DESCRIPTION "A well organized C++ OpenGL wrangler library" )

# Configure
set( LIBRARY_TYPE STATIC CACHE STRING "Library type")
set( INSTALL_INCLUDE_DIR include CACHE PATH "Include headers' relative install directory")
set( INSTALL_LIBRARY_DIR lib CACHE PATH "Library archives' relative install directory")
set( INSTALL_BINARY_DIR bin CACHE PATH "Binaries' relative install directory")
set( CMAKE_CXX_STANDARD 11 CACHE STRING "Compilation standard")
option( BUILD_TOOLS OFF )
option( BUILD_TESTS OFF )

# Configure library type
set( LIB_SUFFIX "" )
if( "${LIBRARY_TYPE}" STREQUAL "MODULE" )
# ---
elseif( "${LIBRARY_TYPE}" STREQUAL "SHARED" )
	set( LIB_SUFFIX ${LIB_SUFFIX}r )
else()
	set( LIBRARY_TYPE STATIC )
	set( LIB_SUFFIX ${LIB_SUFFIX}s )
endif()

# Configure build type
if( "${CMAKE_BUILD_TYPE}" MATCHES "[Dd][Ee][Bb][Uu][Gg]" )
	add_compile_definitions( DEBUG )
	set( LIB_SUFFIX ${LIB_SUFFIX}d )
elseif( "${CMAKE_BUILD_TYPE}" MATCHES "[Rr][Ee][Ll]" )
	add_compile_definitions( NDEBUG )
endif()

# Print configurations
message( "Project: ${PROJECT_NAME}" )
message( "LIBRARY_TYPE= ${LIBRARY_TYPE}" )
message( "CMAKE_BUILD_TYPE= ${CMAKE_BUILD_TYPE}" )
message( "CMAKE_INSTALL_PREFIX= ${CMAKE_INSTALL_PREFIX}" )
message( "INSTALL_INCLUDE_DIR= ${INSTALL_INCLUDE_DIR}" )
message( "INSTALL_LIBRARY_DIR= ${INSTALL_LIBRARY_DIR}" )
message( "INSTALL_BINARY_DIR= ${INSTALL_BINARY_DIR}" )
message( "CMAKE_CXX_STANDARD= ${CMAKE_CXX_STANDARD}" )
message( "BUILD_TOOLS= ${BUILD_TOOLS}" )
message( "BUILD_TESTS= ${BUILD_TESTS}" )
message( "------------------------------------------" )

include_directories( include )
add_subdirectory( src )
if( ${BUILD_TOOLS} )
	add_subdirectory( tools )
endif()
if( ${BUILD_TESTS} )
	add_subdirectory( tests )
endif()

# Install
install( FILES
	"include/axl.glw/lib.hpp"
	"include/axl.glw/platform.hpp"
	"include/axl.glw/Dummy.hpp"
	"include/axl.glw/glw.hpp"
	"include/axl.glw/gl.hpp"
	"include/axl.glw/glext.hpp"
	"include/axl.glw/gl1.hpp"
	"include/axl.glw/gl2.hpp"
	"include/axl.glw/gl3.hpp"
	"include/axl.glw/gl4.hpp"
	"include/axl.glw/wglext.hpp"
	DESTINATION "${INSTALL_INCLUDE_DIR}/axl.glw"
)
install( TARGETS
	axl.glw
	ARCHIVE DESTINATION "${INSTALL_LIBRARY_DIR}"
	LIBRARY DESTINATION "${INSTALL_BINARY_DIR}"
	RUNTIME DESTINATION "${INSTALL_BINARY_DIR}"
	CONFIGURATIONS "" Debug Release
)