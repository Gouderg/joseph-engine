#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>

#include <cstdlib>
#include <iostream>

#define WIDTH 800
#define HEIGHT 600

class MainWindow {

    public:

        // Constructor.
        MainWindow();

        // Destructor.
        ~MainWindow();

        // Other.
        bool initWindow();
        bool initGL();
        void mainLoop();

    private:
        sf::Window window;
};