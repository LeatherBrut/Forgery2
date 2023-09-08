add_executable(${PROJECT_NAME} Main.cpp)
file(GLOB source *.cpp)
target_link_libraries(${PROJECT_NAME} glfw DearImgui)

