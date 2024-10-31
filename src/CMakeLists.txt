# Adds all source file to build project Demo
# Can add all link library or more sub_directory here.
# As UnitTest folder is in root no need to add googletest dependancy here

project(Demo)
file(GLOB project_src
  "*.cpp"
  "**/*.cpp"
)
add_executable(${PROJECT_NAME} ${project_src})
