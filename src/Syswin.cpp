#include <GLFW/glfw3.h>


int main(int,char**){
  
  GLFWwindow* winmaker
  
  if(!glfwInit())
    return -1;
  
  winmaker = glfwCreateWindow(300,300, "Forgery",NULL,NULL);
  if(!winmaker){
    glfwTerminate()
    return -1;
  }
  
  
    return 0;  
}