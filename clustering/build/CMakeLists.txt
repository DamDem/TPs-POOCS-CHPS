cmake_minimum_required(VERSION 3.10.2)

    project(clustering)

    include_directories(headers)

    set(SOURCES     ../src/main.cpp 
                    ../src/Point.cpp 
                    ../src/Blob.cpp 
                    ../src/Tools.cpp
                    ../src/Kmeans.cpp
        )
    
    #file(GLOB SOURCES "src/*.cpp")

    add_executable(clustering ${SOURCES})

    find_package(PythonLibs 2.7)
    target_include_directories(clustering PRIVATE ${PYTHON_INCLUDE_DIRS})
    target_link_libraries(clustering ${PYTHON_LIBRARIES})