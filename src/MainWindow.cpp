#include "../header/MainWindow.hpp"

// Constructor.
MainWindow::MainWindow() {
    // Nothing.    
}

// Destructor.
MainWindow::~MainWindow() {
    this->window.close();
}

bool MainWindow::initWindow() {
    

    sf::ContextSettings settings;
	settings.antialiasingLevel = 8;
    
    this->window.create(sf::VideoMode(WIDTH, HEIGHT), "Joseph Engine", sf::Style::Default, settings);
    this->window.setVerticalSyncEnabled(true);  // Synchronise le fréquence verticale avec le processeur
    this->window.setFramerateLimit(60);
    this->window.setActive(true);
    return true;

}

bool MainWindow::initGL() {
    return true;
}

void MainWindow::mainLoop() {

    while(this->window.isOpen()) {
        sf::Event event;
        while(this->window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                this->window.close();
            }
        }

        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        this->window.display();
    }

}


