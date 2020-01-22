cmake_minimum_required(VERSION 3.10.2)

    project(graph_coloring)

    include_directories(headers)

    set(SOURCES     ../src/main.cpp 
                    ../src/GraphVec.cpp
                    ../src/NaiveColoring.cpp    
                    ../src/WelshPowell.cpp
        )
        
    add_executable(graph_coloring ${SOURCES})