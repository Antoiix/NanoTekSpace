cmake_minimum_required(VERSION 3.16)
project(NanoTekSpice)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror")

include_directories(include)
include_directories(include/Interface)
include_directories(include/Abstract)
include_directories(include/Components)

add_executable(nanotekspice
        src/main.cpp
        src/HelloWorld.cpp
        src/Shell.cpp
        src/Utils/StrToWordArray.cpp
        src/Utils/GetFileContent.cpp
        src/Utils/RemoveComment.cpp
        src/Parsing.cpp
        src/Abstract/AComponent.cpp
        src/Map.cpp
        src/Pin.cpp
        src/Components/AndComponent.cpp
        src/Components/FalseComponent.cpp
        src/Components/InputComponent.cpp
        src/Components/NotComponent.cpp
        src/Components/OrComponent.cpp
        src/Components/OutputComponent.cpp
        src/Components/TrueComponent.cpp
        src/Factory.cpp
        src/Components/XorComponent.cpp
        src/Components/4030Component.cpp
)

add_executable(unit_tests
        tests/Utils/TestUtils.cpp
        tests/Test_HelloWorld.cpp
        tests/Test_XorComponent.cpp
        tests/Test_OrComponent.cpp
        tests/Test_AndComponent.cpp
        tests/Test_NotComponent.cpp
        tests/Test_4030Component.cpp
        tests/Test_Utils.cpp
        src/HelloWorld.cpp
        src/Shell.cpp
        src/Utils/StrToWordArray.cpp
        src/Utils/GetFileContent.cpp
        src/Utils/RemoveComment.cpp
        src/Parsing.cpp
        src/Abstract/AComponent.cpp
        src/Map.cpp
        src/Pin.cpp
        src/Components/AndComponent.cpp
        src/Components/FalseComponent.cpp
        src/Components/InputComponent.cpp
        src/Components/NotComponent.cpp
        src/Components/OrComponent.cpp
        src/Components/OutputComponent.cpp
        src/Components/TrueComponent.cpp
        src/Factory.cpp
        src/Components/XorComponent.cpp
        src/Components/4030Component.cpp
)

target_link_libraries(unit_tests criterion)

target_compile_options(unit_tests PRIVATE -fprofile-arcs -ftest-coverage)
target_link_options(unit_tests PRIVATE -fprofile-arcs -ftest-coverage)

add_custom_target(tests_run
        COMMAND ./unit_tests
        COMMAND gcovr -r .. --exclude 'src/main.cpp' --html --html-details -o coverage_report.html
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
        COMMAND gcovr -r ..
        DEPENDS unit_tests
)
