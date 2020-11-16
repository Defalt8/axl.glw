cmake_minimum_required( VERSION 3.17 )

link_libraries( axl.glw )

add_executable( lib "lib.cpp" )
add_executable( platform "platform.cpp" )
add_executable( Dummy "Dummy.cpp" )