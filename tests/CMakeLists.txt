cmake_minimum_required( VERSION 3.17 )

project( axl.glw.tests )
link_libraries( axl.glw )

add_executable( lib "lib.cpp" )
add_executable( platform "platform.cpp" )
add_executable( Dummy "Dummy.cpp" )
add_executable( glw "glw.cpp" )
add_executable( gl "gl.cpp" )
add_executable( wglext "wglext.cpp" )