cmake_minimum_required(VERSION 4.4.0)
project(YAP)

# "grab every file with .c from src"
file(GLOB SOURCES "src/*.c")

add_executable(${PROJECT_NAME} ${SOURCES})

# add the header files
target_include_directories(${PROJECT_NAME} PRIVATE 
	C:/raylib/w64devkit/include
)

# link .o and .a files
target_link_directories(${PROJECT_NAME} PRIVATE 
	C:/raylib/w64devkit/lib
)

# the actual libraries this time
target_link_libraries(${PROJECT_NAME} PRIVATE
	raylib
	opengl32
	gdi32
	winmm
)