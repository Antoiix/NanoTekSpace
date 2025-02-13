cmake_minimum_required(VERSION 3.16)
project(NanoTekSpice)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror")

include_directories(include)

set(SRC_FILES
        src/main.cpp
        src/HelloWorld.cpp
        include/Interface/IComponent.hpp
        src/ManageExecutionCommands.cpp
        src/Utils/StrToWordArray.cpp
        src/Utils/GetFileContent.cpp
        src/Utils/RemoveComment.cpp
        src/Parsing.cpp
)

set(TEST_SRC_FILES
        tests/Utils/TestUtils.cpp
        tests/Test_HelloWorld.cpp
        src/HelloWorld.cpp
        include/Interface/IComponent.hpp
        src/ManageExecutionCommands.cpp
        src/Utils/RemoveComment.cpp
        src/Parsing.cpp
        tests/Test_Utils.cpp
)

add_executable(nanotekspice ${SRC_FILES})

add_executable(unit_tests ${TEST_SRC_FILES})

target_link_libraries(unit_tests criterion)

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    target_compile_options(unit_tests PRIVATE -fprofile-arcs -ftest-coverage)
    target_link_options(unit_tests PRIVATE -fprofile-arcs -ftest-coverage)
endif()

add_custom_target(tests_run
        COMMAND ./unit_tests
        COMMAND gcovr -r .. --exclude 'src/main.cpp' --html --html-details -o coverage_report.html
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
        COMMAND gcovr -r ..
        DEPENDS unit_tests
)
