cmake_minimum_required(VERSION 3.14)
project(my_project)

# GoogleTest requires at least C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/add971c.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
  tests
  entry.cpp
)
target_link_libraries(
  tests
  GTest::gtest_main
)
target_link_libraries(
  tests
  ${CMAKE_SOURCE_DIR}/../libft.a
)
target_include_directories(
  tests
  PUBLIC
  ${CMAKE_SOURCE_DIR}/..
)

include(GoogleTest)
gtest_discover_tests(tests)
