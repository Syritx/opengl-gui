#include <GL/glew.h>
#include <GLFW/glfw3.h>

int main(int argc, const char * argv[]) {

    GLFWwindow* window;
    if (!glfwInit()) return -1;
    
    window = glfwCreateWindow(1000, 720, "test opengl", NULL, NULL);
    
    if (!window) {
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);
    
    while (!glfwWindowShouldClose(window)) {
        glClear(GL_COLOR_BUFFER_BIT);
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    
    glfwTerminate();
    return 0;
}
