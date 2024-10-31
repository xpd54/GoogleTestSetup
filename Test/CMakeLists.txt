project(hello_test)
add_subdirectory(googletest)
file(GLOB test_src
  "test/*.cpp"
)

add_executable(
  ${PROJECT_NAME}
  ${test_src}
)

target_link_libraries(
  ${PROJECT_NAME}
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME})