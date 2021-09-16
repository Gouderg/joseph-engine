#include "../header/Particule.hpp"

// Constructor.
Particule::Particule(double masse, PVector position) {
    this->masse = masse;
    this->position = position;
    this->vitesse = PVector(1,1,0);


    // std::cout << "Appel du constructeur de Particule" << std::endl;
}

// Destructor.
Particule::~Particule() {
    // std::cout << "Appel du desctruteur de Particule" << std::endl;
}

// Update.

void Particule::updateFrame() {

    double t = 1.0/FRAME;
    double d = pow(DAMPING,t);

    // Calcul des forces s'exerçant sur la particule.
    PVector acceleration = PVector(0,0,0);
    acceleration.add(PVector(0,-GRAVITY,0));  // On ajoute la gravité.

    // Update de la position.
    // PVector position = this->position;
    // position.add(PVector::mul(this->vitesse, t));
    // position.add(PVector::mul(acceleration, pow(t,2)/2));
    // this->position = position;
    // this->position.add(this->vitesse);

    
    this->position.add(PVector::mul(this->vitesse, t));
    this->position.add(PVector::mul(acceleration, pow(t,2)/2));

    // Update de la vitesse.
    this->vitesse.mul(d);
    this->vitesse.add(PVector::mul(acceleration,t));


}

// Show position.
void Particule::showPosition() {
        std::cout << "x:" << this->position.getX() << ", y: " << this->position.getY() << ", z: " << this->position.getZ() << std::endl;
        std::cout << "x:" << this->vitesse.getX() << ", y: " << this->vitesse.getY() << ", z: " << this->vitesse.getZ() << std::endl;
        std::cout << " " << std::endl;
}