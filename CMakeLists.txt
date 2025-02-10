cmake_minimum_required(VERSION 3.16)
project(NanoTekSpice)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror")

# Enable coverage if in Debug mode
if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fprofile-arcs -ftest-coverage")
    set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -fprofile-arcs -ftest-coverage")
endif()

# Include headers
include_directories(include)

# Define source files
set(SRC_FILES
        src/main.cpp
        src/HelloWorld.cpp
)

set(TEST_SRC_FILES
        tests/Utils/TestUtils.cpp
        tests/Test_HelloWorld.cpp
        src/HelloWorld.cpp  # Include the same source files as in your Makefile
)

# Create the main executable
add_executable(nanotekspice ${SRC_FILES})

# Create the test executable (without main.cpp)
add_executable(unit_tests ${TEST_SRC_FILES})

# Link Criterion and enable coverage
target_link_libraries(unit_tests criterion)

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    target_compile_options(unit_tests PRIVATE -fprofile-arcs -ftest-coverage)
    target_link_options(unit_tests PRIVATE -fprofile-arcs -ftest-coverage)
endif()

add_custom_target(tests_run
        COMMAND CRITERION_OPTIONS="--disable-fork" ./unit_tests
        COMMAND gcovr -r .. --exclude 'src/main.cpp' --html --html-details -o coverage_report.html
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
        COMMAND gcovr -r ..
        DEPENDS unit_tests
)

# Add test command
enable_testing()
add_test(NAME MyTests COMMAND unit_tests)
