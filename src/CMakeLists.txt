find_package(spdlog CONFIG REQUIRED)

add_executable(editor
    "${CMAKE_CURRENT_SOURCE_DIR}/Main.cpp"
)

target_link_libraries(editor PRIVATE spdlog::spdlog)

target_include_directories(editor PUBLIC "${PROJECT_SOURCE_DIR}/src")
