cmake_minimum_required (VERSION 3.26)

# -------------------------------------------
# Основные настройки исполняемого файла
# -------------------------------------------
set(PROJECT_NAME DominiGames)
set(SOURCES src/main.cpp)
set(APP_ICON_RESOURCE_WINDOWS "${CMAKE_CURRENT_SOURCE_DIR}/resources/icon/app.rc")
set(CMAKE_PREFIX_PATH "${CMAKE_CURRENT_SOURCE_DIR}/sfml")

project(${PROJECT_NAME} CXX)
add_executable(${PROJECT_NAME} WIN32 
	${SOURCES} 
	${APP_ICON_RESOURCE_WINDOWS})

find_package(SFML 2.5.1 COMPONENTS network audio graphics window system)
target_link_libraries(${PROJECT_NAME} PRIVATE 
	sfml-graphics 
	sfml-audio 
	sfml-network 
	sfml-window 
	sfml-system)

# -------------------------------------------
# Копирование динамических библиотек SFML
# -------------------------------------------
if (NOT SFML_STATIC_LIBRARIES) 
file(COPY 
	${CMAKE_PREFIX_PATH}/bin/sfml-audio-d-2.dll 
	${CMAKE_PREFIX_PATH}/bin/sfml-graphics-d-2.dll 
	${CMAKE_PREFIX_PATH}/bin/sfml-network-d-2.dll 
	${CMAKE_PREFIX_PATH}/bin/sfml-system-d-2.dll 
	${CMAKE_PREFIX_PATH}/bin/sfml-window-d-2.dll 
	${CMAKE_PREFIX_PATH}/bin/openal32.dll 
	DESTINATION 
	${CMAKE_CURRENT_SOURCE_DIR}/build/Debug)
endif()

# -------------------------------------------
# Настройки проекта
# -------------------------------------------
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 17)
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD_REQUIRED ON)
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT ${PROJECT_NAME})

# -------------------------------------------
# Отключение консоли
# -------------------------------------------
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} /SUBSYSTEM:WINDOWS /ENTRY:mainCRTStartup")
set(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS} /SUBSYSTEM:WINDOWS /ENTRY:mainCRTStartup")
