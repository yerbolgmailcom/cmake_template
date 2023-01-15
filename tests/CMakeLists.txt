include(FetchContent)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        release-1.11.0
)
FetchContent_MakeAvailable(googletest)
add_library(GTest::GTest INTERFACE IMPORTED)
target_link_libraries(GTest::GTest INTERFACE gtest_main)

add_executable(multiply_test multiply_test.cpp)

target_link_libraries(multiply_test
 PRIVATE
  GTest::GTest
  multiply)

find_package(Python COMPONENTS Interpreter REQUIRED)

add_test(NAME gtest_core 
    COMMAND multiply_test 
    WORKING_DIRECTORY "${CMAKE_CURRENT_LIST_DIR}"
)

add_test(NAME test_output_python
    COMMAND "${Python_EXECUTABLE}" "${CMAKE_CURRENT_LIST_DIR}/test_output.py" 
    WORKING_DIRECTORY "${CMAKE_CURRENT_LIST_DIR}"
)