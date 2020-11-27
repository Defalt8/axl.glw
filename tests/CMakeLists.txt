

link_libraries( axl.glw )

add_executable( lib "lib.cpp" )
add_executable( platform "platform.cpp" )
add_executable( Dummy "Dummy.cpp" )
add_executable( glw "glw.cpp" )
if( WIN32 )
	add_executable( wglext "wglext.cpp" )
endif()