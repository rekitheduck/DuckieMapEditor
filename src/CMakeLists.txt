cmake_minimum_required(VERSION 3.5)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

project(editor LANGUAGES CXX)

find_package(spdlog CONFIG REQUIRED)
find_package(Qt6 COMPONENTS Core Gui Widgets REQUIRED)

add_executable(editor
    "${CMAKE_CURRENT_SOURCE_DIR}/Main.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/MainWindow.cpp"
)

target_link_libraries(editor PRIVATE spdlog::spdlog Qt::Core Qt::Gui Qt::Widgets)

target_include_directories(editor PUBLIC "${PROJECT_SOURCE_DIR}/src")
