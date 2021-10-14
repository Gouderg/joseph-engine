#include "../header/Particule.hpp"
#include "../header/MainWindow.hpp"

int main(int argc, char const *argv[]) {

    MainWindow app;

    if (!app.initWindow()) {
        std::cout << "Erreur initialisation de la fenêtre" << std::endl;
        return EXIT_FAILURE;
    }

    app.mainLoop();
    

    return EXIT_SUCCESS;
}
