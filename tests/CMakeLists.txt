include_directories("${PROJECT_SOURCE_DIR}/src/")
include_directories("${PROJECT_SOURCE_DIR}/include/")

set(TEST_SOURCES mainTest.cpp
                 testclasstest.h
                 testclasstest.cpp)

add_executable(TestAll ${TEST_SOURCES})
target_link_libraries(TestAll ${PROJECT_NAME})
