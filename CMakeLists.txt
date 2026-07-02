cmake_minimum_required(VERSION 4.4.0)
project(YAP)

file(GLOB SOURCES "src/*.c")

add_executable(${PROJECT_NAME} ${SOURCES})

target_include_directories(${PROJECT_NAME} PRIVATE 
	C:/raylib/w64devkit/include
)

target_link_directories(${PROJECT_NAME} PRIVATE 
	C:/raylib/w64devkit/lib
)

target_link_libraries(${PROJECT_NAME} PRIVATE
	raylib
	opengl32
	gdi32
	winmm
)