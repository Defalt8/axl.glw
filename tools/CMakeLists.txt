

link_libraries( axl.glw )

add_executable( gl "gl.cpp" )
add_executable( wgl "wgl.cpp" )

if( INSTALL_TOOLS )
	install( TARGETS gl wgl )
endif()