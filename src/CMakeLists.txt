project(Demo)
file(GLOB project_src
  "*.cpp"
  "util/*.cpp"
)
add_executable(${PROJECT_NAME} ${project_src})
