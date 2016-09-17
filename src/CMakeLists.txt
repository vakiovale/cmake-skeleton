set(HEADERS
    exampleclass.h
    testclass.h)

set(SOURCES
    exampleclass.cpp
    testclass.cpp)

add_library(${PROJECT_NAME} ${SOURCES} ${HEADERS})
