#pragma once

#include <iostream>
#include <cmath>

#include "../header/PVector.hpp"

#define DAMPING 1
#define GRAVITY 10  // 10 pour la réalité, 15 pour les FPS, 20 pour les jeux de courses.
#define FRAME 30


class Particule {

    public:

        // Constructor.
        Particule(double masse, PVector position);

        // Desctructor.
        ~Particule();

        // Getter.
        double getMasse() const {return this->masse;}
        PVector getPosition() const {return this->position;}
        PVector getVitesse() const {return this->vitesse;}
        // PVector getAcceleration() const {return this->acceleration;} 

        // Setter.
        void setMasse(const double masse) {this->masse = masse;}
        void setPosition(const PVector position) {this->position = position;}
        void setVitesse(const PVector vitesse) {this->vitesse = vitesse;}
        // void setAcceleration(const PVector acceleration) {this->acceleration = acceleration;}

        // Update.
        void updateFrame();
        void showPosition();

    private:
        double masse;           
        PVector position;
        PVector vitesse;
        // PVector acceleration;

};