cmake_minimum_required (VERSION 3.26)

set(PROJECT_NAME DominiGames)
set(SOURCES main.cpp)
set(APP_ICON_RESOURCE_WINDOWS "${CMAKE_CURRENT_SOURCE_DIR}/src/icon/app.rc")
set(CMAKE_PREFIX_PATH "${CMAKE_CURRENT_SOURCE_DIR}/sfml")
set(SFML_STATIC_LIBRARIES TRUE)

project(${PROJECT_NAME} CXX)

add_executable(${PROJECT_NAME} 
	${SOURCES} 
	${APP_ICON_RESOURCE_WINDOWS})

find_package(SFML 2.5.1 COMPONENTS network audio graphics window system)
target_link_libraries(${PROJECT_NAME} PRIVATE 
	sfml-graphics 
	sfml-audio 
	sfml-network 
	sfml-window 
	sfml-system)

set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 20)
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD_REQUIRED ON)
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT ${PROJECT_NAME})