cmake_minimum_required(VERSION 4.0.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project(
	LearningThread
	VERSION 0.0.0
	LANGUAGES CXX
)

add_executable(
	001-hello-thread
	001-hello-thread.cpp
)
