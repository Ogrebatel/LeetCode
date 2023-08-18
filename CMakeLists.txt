cmake_minimum_required(VERSION 3.23)
project(TEMPLATE CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

option(ENABLE_TESTING "enable testing" ON)

add_subdirectory(Solution)

if (ENABLE_TESTING)
    add_subdirectory(Tests)
endif ()
