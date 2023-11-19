cmake_minimum_required(VERSION 3.20)
project(Forgery2)


#Set C language standard
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
#set(CMAKE_C_STANDARD_EXTENSIONS ON)

# Set C++ language standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
#set(CMAKE_CXX_STANDARD_EXTENSIONS ON)

#glfw
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/deps/glfw)
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
#Dear Imgui
add_library( DearImgui STATIC


    ${CMAKE_CURRENT_SOURCE_DIR}/deps/DearImgui

    ${CMAKE_CURRENT_SOURCE_DIR}/deps/DearImgui/imgui_impl_glfw.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/deps/DearImgui/imgui_impl_opengl3.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/deps/DearImgui/imconfig.h
    ${CMAKE_CURRENT_SOURCE_DIR}/deps/DearImgui/imgui.h
    ${CMAKE_CURRENT_SOURCE_DIR}/deps/DearImgui/imgui.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/deps/DearImgui/imgui_draw.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/deps/DearImgui/imgui_demo.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/deps/DearImgui/imgui_internal.h
    ${CMAKE_CURRENT_SOURCE_DIR}/deps/DearImgui/imgui_tables.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/deps/DearImgui/imgui_widgets.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/deps/DearImgui/imstb_textedit.h
    ${CMAKE_CURRENT_SOURCE_DIR}/deps/DearImgui/imstb_truetype.h
)

add_subdirectory(src)
target_link_libraries(${PROJECT_NAME} glfw DearImgui)
