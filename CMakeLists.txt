cmake_minimum_required(VERSION 3.27)
project(untitled9)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(untitled9 main.cpp
        MainWindow.cpp
        MainWindow.h
        MainWindow.cpp
        MainWindow.cpp)
target_link_libraries(untitled9
        Qt::Core
        Qt::Gui
        Qt::Widgets
)

