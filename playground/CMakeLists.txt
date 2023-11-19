cmake_minimum_required(VERSION 3.3)
project(catch2Test)
Include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.0.1 # or a later release
)

FetchContent_MakeAvailable(Catch2)

add_executable(Catch2Test main.cpp)

target_link_libraries(
    Catch2Test
    PRIVATE:
        Catch2::Catch2WithMain       
)