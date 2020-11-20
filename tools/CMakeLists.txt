cmake_minimum_required( VERSION 3.17 )

link_libraries( axl.glw )
set( RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin" )

add_executable( gl "gl.cpp" )
add_executable( wgl "wgl.cpp" )

if( INSTALL_TOOLS )
	install( TARGETS
		gl wgl
		RUNTIME DESTINATION "${INSTALL_TOOLS_DIR}"
		CONFIGURATIONS "" Debug Release
	)
endif()