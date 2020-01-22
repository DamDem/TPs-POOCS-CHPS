cmake_minimum_required(VERSION 3.10.2)

    project(regression)

    include_directories(headers)

    set(SOURCES     ../src/main.cpp
                    ../src/DataGen.cpp
                    ../src/Tools.cpp
                    ../src/Hypothese.cpp
        )
    
    #file(GLOB SOURCES "src/*.cpp")

    add_executable(regression ${SOURCES})

    find_package(PythonLibs 2.7)
    target_include_directories(regression PRIVATE ${PYTHON_INCLUDE_DIRS})
    target_link_libraries(regression ${PYTHON_LIBRARIES})