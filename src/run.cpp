#include "config.h"


int run()
{
    std::cout << "Hello" << std::endl;

    GLFWwindow* window;

    if (!glfwInit()) {
        std::cout << "GLFW couldn't start" << std::endl;
        return -1;
    }
    window = glfwCreateWindow(640,480,"My window", NULL, NULL);

    while (!glfwWindowShouldClose(window))
    {
        glfwPollEvents();
    }

    glfwTerminate();

    return 0;
}
