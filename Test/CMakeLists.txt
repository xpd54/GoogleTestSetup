project(hello_test)

file(GLOB test_src
  "test/*.cpp"
)

file(GLOB testing_src
  "../src/util/*.cpp"
)
include_directories(../src/util)
add_library(testing_lib ${testing_src})
add_executable(
  ${PROJECT_NAME}
  ${test_src}
)
target_link_libraries(
  ${PROJECT_NAME}
  GTest::gtest_main
  testing_lib
)
add_subdirectory(googletest)
include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME})