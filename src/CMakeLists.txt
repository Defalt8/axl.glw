cmake_minimum_required( VERSION 3.17 )

# Library
add_library( axl.glw ${LIB_TYPE}
	"lib.cpp"
	"Dummy.cpp"
)
# Target link libraries
target_link_libraries( axl.glw -lgdi32 -lopengl32 )
# Target compile definitions
if( "${LIB_TYPE}" STREQUAL "SHARED" )
	target_compile_definitions( axl.glw PRIVATE BUILD_SHARED )
elseif( "${LIB_TYPE}" STREQUAL "MODULE" )
	target_compile_definitions( axl.glw PRIVATE BUILD_MODULE )
endif()
# Target properties
set_target_properties( axl.glw PROPERTIES
	LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/tests"
	RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/tests"
)
if( "${CMAKE_BUILD_TYPE}" STREQUAL "Debug" )
	set_target_properties( axl.glw PROPERTIES
		ARCHIVE_OUTPUT_NAME axl.glwd
		LIBRARY_OUTPUT_NAME axl.glwd
		RUNTIME_OUTPUT_NAME axl.glwrd
	)
else()
	set_target_properties( axl.glw PROPERTIES
		ARCHIVE_OUTPUT_NAME axl.glw
		LIBRARY_OUTPUT_NAME axl.glw
		RUNTIME_OUTPUT_NAME axl.glwr
	)
endif()