#include "../header/PVector.hpp"

// Constructor.
PVector::PVector(double x = 0, double y = 0, double z = 0) {
    this->x = x;
    this->y = y;
    this->z = z;

    // std::cout << "Appel du constructeur de PVector" << std::endl;
}

// Desctructor.
PVector::~PVector() {
    // std::cout << "Appel du desctructeur de PVector" << std::endl;
}

// Norme.
double PVector::norme() {
    return sqrt(pow(this->x, 2) + pow(this->y, 2) + pow(this->z, 2));
}

double PVector::norme(PVector v) {
    return sqrt(pow(v.x, 2) + pow(v.y, 2) + pow(v.z, 2));
}

// Normalisation.
PVector PVector::normalisation(PVector v) {
    double norme = v.norme();
    return PVector(v.x/norme, v.y/norme, v.z/norme);
}

PVector PVector::normalisation() {
    double norme = this->norme();
    return PVector(this->x/norme, this->y/norme, this->z/norme);
}

// Add.
void PVector::add(PVector v) {
    this->x += v.x;
    this->y += v.y;
    this->z += v.z;
}
void PVector::add(double n) {
    this->x += n;
    this->y += n;
    this->z += n;
}

// Sub.
void PVector::sub(PVector v) {
    this->x -= v.x;
    this->y -= v.y;
    this->z -= v.z;
}
void PVector::sub(double n) {
    this->x -= n;
    this->y -= n;
    this->z -= n;
}

// Mul.
void PVector::mul(PVector v) {
    this->x *= v.x;
    this->y *= v.y;
    this->z *= v.z;
}
void PVector::mul(double n) {
    this->x *= n;
    this->y *= n;
    this->z *= n;
}

PVector PVector::mul(PVector v, double n) {
    return PVector(
        v.x * n,
        v.y * n,
        v.z * n
    );
}


// Div.
void PVector::div(PVector v) {
    this->x /= v.x;
    this->y /= v.y;
    this->z /= v.z;
}
void PVector::div(double n) {
    this->x /= n;
    this->y /= n;
    this->z /= n;
}

// Produit vectoriel.
PVector PVector::produitVectoriel(PVector u, PVector v) {
    return PVector(
        u.y*v.z - u.z*v.y,
        u.z*v.x - u.x*v.z,
        u.x*v.y - u.y*v.x
    );
}

// Produit scalaire.
double PVector::produitScalaire(PVector u, PVector v) {
    return (u.x*v.x + u.y*v.y + u.z*v.z);
}