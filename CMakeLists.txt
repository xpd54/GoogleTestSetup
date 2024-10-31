cmake_minimum_required(VERSION 3.26)
project(Test)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(
  googletest
)

file(GLOB project_src
  "src/*.cpp"
  "src/util/*.cpp"
)
add_executable(${PROJECT_NAME} ${project_src})

enable_testing()
file(GLOB test_src
  "src/Test/*.cpp"
)

add_executable(
  hello_test
  ${test_src}
)

target_link_libraries(
  hello_test
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(hello_test)