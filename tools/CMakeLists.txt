cmake_minimum_required( VERSION 3.17 )

link_libraries( axl.glw )

add_executable( gl "gl.cpp" )
add_executable( wgl "wgl.cpp" )