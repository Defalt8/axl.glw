cmake_minimum_required( VERSION 3.17 )

# Library
add_library( axl.glw ${LIB_TYPE}
	"lib.cpp"
	"Dummy.cpp"
	"glw.cpp"
	"platext.cpp"
)
# Target link libraries
if( ${MSVC} )
	set( LIBGDI32 gdi32.lib )
	set( LIBOPENGL32 opengl32.lib )
elseif( ${WIN32} )
	set( LIBGDI32 -lgdi32 )
	set( LIBOPENGL32 -lopengl32 )
else()
	set( LIBOPENGL32 -lopengl32 )
endif()
target_link_libraries( axl.glw ${LIBGDI32} ${LIBOPENGL32} )
# Target compile definitions
target_compile_definitions( axl.glw PUBLIC AXLGLW_${LIB_TYPE} )
target_compile_definitions( axl.glw PRIVATE AXLGLW_BUILD )
# Target properties
set_target_properties( axl.glw PROPERTIES
	LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/tests"
	RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/tests"
)
set_target_properties( axl.glw PROPERTIES
	ARCHIVE_OUTPUT_NAME axl.glw${LIB_SUFFIX}
	RUNTIME_OUTPUT_NAME axl.glw${LIB_SUFFIX}
	LIBRARY_OUTPUT_NAME axl.glw${LIB_SUFFIX}
)