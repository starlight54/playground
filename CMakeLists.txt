cmake_minimum_required(VERSION 3.6)
project(playground)

set(CMAKE_CXX_STANDARD 14)
set(SOURCE_FILES AppMain.cpp AppMain.h Source/Gui/StandardWindow.cpp Headers/Gui/StandardWindow.h Headers/Gui/MenuItems.h)
set(wxWidgets_CONFIGURATION mswu)

find_package(wxWidgets COMPONENTS core base REQUIRED)
include(${wxWidgets_USE_FILE})

add_executable(playground ${SOURCE_FILES})
target_link_libraries(playground ${wxWidgets_LIBRARIES})