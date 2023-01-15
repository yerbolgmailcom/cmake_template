add_subdirectory(multiply)

add_executable(main main.cpp)

target_link_libraries(main  multiply)

