cmake_minimum_required(VERSION 2.8)

project(avr-lib-tests)

include_directories(
	"${PROJECT_SOURCE_DIR}/include" 		
	"${PROJECT_SOURCE_DIR}/.."
)

add_executable(avr-lib-tests avr-lib-tests.c)
