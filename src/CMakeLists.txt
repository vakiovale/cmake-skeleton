set(HEADERS
    exampleclass.h
    testclass.h)

set(SOURCES
    exampleclass.cpp
    testclass.cpp)

add_library(${PROJECT_NAME} ${SOURCES} ${HEADERS})

install(FILES ${HEADERS} DESTINATION include/${PROJECT_NAME})
install(TARGETS ${PROJECT_NAME}
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib)
