cmake_minimum_required(VERSION 3.10)

project(CustomTDDFramework VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(tdd_framework
    main.cpp
    AssertionException.hpp
    AssertionException.cpp
    Verify.hpp
    Verify.cpp
    TestStatus.hpp
    TestResult.hpp
    TestResult.cpp
    TestCase.hpp
    TestCase.cpp
    TestSuite.hpp
    TestSuite.cpp
    ConsoleReporter.hpp
    ConsoleReporter.cpp
)

target_include_directories(tdd_framework PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
