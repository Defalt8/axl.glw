
# library
set( LIBAXLGLW_OUTPUT_NAME axl.glw )
add_library( axl.glw ${LIBAXLGLW_TYPE}
	"lib.cpp"
	"glProc.cpp"
	"Dummy.cpp"
	"glw.cpp"
	"platext.cpp"
)
# target link libraries
if( ${MSVC} )
	set( LIBGDI32 gdi32.lib )
	set( LIBOPENGL32 opengl32.lib )
elseif( ${WIN32} )
	set( LIBGDI32 -lgdi32 )
	set( LIBOPENGL32 -lopengl32 )
elseif( UNIX AND NOT APPLE )
	set( LIBOPENGL32 -lGL -lX11 )
else()
	set( LIBOPENGL32 -lopengl32 )
endif()
target_link_libraries( axl.glw ${LIBGDI32} ${LIBOPENGL32} )
# target properties and definitions
target_compile_definitions( axl.glw
	PRIVATE LIBAXLGLW_BUILD
	PUBLIC LIBAXLGLW_VERSION_MAJOR=${axl.glw_VERSION_MAJOR}
	PUBLIC LIBAXLGLW_VERSION_MINOR=${axl.glw_VERSION_MINOR}
	PUBLIC LIBAXLGLW_VERSION_PATCH=${axl.glw_VERSION_PATCH}
)
if( "${LIBAXLGLW_TYPE}" MATCHES "^[Ss][Tt][Aa][Tt][Ii][Cc]$" )
	set( LIBAXLGLW_SUFFIX s )
	target_compile_definitions( axl.glw
		PUBLIC LIBAXLGLW_STATIC
	)
	if( INSTALL_ARCHIVES AND LIBAXLGLW_INSTALL_ARCHIVES )
		install( TARGETS axl.glw
			ARCHIVE DESTINATION "${CMAKE_INSTALL_PREFIX}/${ARCHIVES_INSTALL_DIR}"
		)
	endif()
elseif( "${LIBAXLGLW_TYPE}" MATCHES "^[Ss][Hh][Aa][Rr][Ee][Dd]$" )
	target_compile_definitions( axl.glw
		PUBLIC LIBAXLGLW_SHARED
	)
	if( INSTALL_ARCHIVES AND LIBAXLGLW_INSTALL_ARCHIVES )
		install( TARGETS axl.glw
			ARCHIVE DESTINATION "${CMAKE_INSTALL_PREFIX}/${ARCHIVES_INSTALL_DIR}"
		)
	endif()
	if( INSTALL_BINARIES AND LIBAXLGLW_INSTALL_BINARIES )
		install( TARGETS axl.glw
			RUNTIME DESTINATION "${CMAKE_INSTALL_PREFIX}/${BINARY_INSTALL_DIR}"
		)
	endif()
else()
	set( LIBAXLGLW_SUFFIX l )
endif()

if( "${CMAKE_BUILD_TYPE}" MATCHES "[Dd][Ee][Bb][Uu][Gg]" )
	set( LIBAXLGLW_SUFFIX "${LIBAXLGLW_SUFFIX}d" )
endif()

set_target_properties( axl.glw PROPERTIES
	OUTPUT_NAME "${LIBAXLGLW_OUTPUT_NAME}${LIBAXLGLW_SUFFIX}"
	ARCHIVE_OUTPUT_NAME "${LIBAXLGLW_OUTPUT_NAME}${LIBAXLGLW_SUFFIX}"
	LIBRARY_OUTPUT_NAME "${LIBAXLGLW_OUTPUT_NAME}${LIBAXLGLW_SUFFIX}"
	RUNTIME_OUTPUT_NAME "${LIBAXLGLW_OUTPUT_NAME}${LIBAXLGLW_SUFFIX}"
	LIBRARY_OUTPUT_DIRECTORY "${LIBAXLGLW_EXPORT_DIR}"
	RUNTIME_OUTPUT_DIRECTORY "${LIBAXLGLW_EXPORT_DIR}"
)
