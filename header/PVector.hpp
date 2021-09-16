#pragma once

#include <iostream>
#include <cmath>

class PVector {
    
    public:
        
        // Constructor.
        PVector(){}
        PVector(double x, double y, double z);

        // Destructor.
        ~PVector();


        // Getter.
        double getX() const {return this->x;}
        double getY() const {return this->y;}
        double getZ() const {return this->z;}

        // Setter.
        void setX(const double x) {this->x = x;}
        void setY(const double y) {this->y = y;}
        void setZ(const double z) {this->z = z;}

        // Norme.
        double norme();
        static double norme(PVector v);

        // Normalisation
        PVector normalisation();
        static PVector normalisation(PVector v);
        
        // Add.
        void add(PVector v);
        void add(double n);
        
        // Sub.
        void sub(PVector v);
        void sub(double n);

        // Mul.
        void mul(PVector v);
        void mul(double n);
        static PVector mul(PVector v, double n);

        // Div.
        void div(PVector v);
        void div(double n);

        // Produit vectoriel.
        static PVector produitVectoriel(PVector u, PVector v);

        // Produit scalaire.
        static double produitScalaire(PVector u, PVector v);

        

    private:
        double x, y, z;
};