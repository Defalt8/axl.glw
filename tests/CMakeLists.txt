

link_libraries( axl.glw )

add_executable( "axl.glw.lib" "lib.cpp" )
add_executable( "axl.glw.platform" "platform.cpp" )
add_executable( "axl.glw.Dummy" "Dummy.cpp" )
add_executable( "axl.glw.glw" "glw.cpp" )
if( WIN32 )
	add_executable( "axl.glw.wglext" "wglext.cpp" )
endif()