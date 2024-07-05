#include "triangulo.h"
#include <cmath>

Triangulo::Triangulo(float base_, std::string formaGeo_) : base(base_), formaGeo(formaGeo_) {
    calcularAltura(base_);
}

Triangulo::~Triangulo() {
}

float Triangulo::getBase() {
    return base;
}

void Triangulo::setBase(float base_) {
    base = base_;
    calcularAltura(base_);
}

std::string Triangulo::getFormaGeo() {
    return formaGeo;
}

void Triangulo::setFormaGeo(std::string formaGeo_) {
    formaGeo = formaGeo_;
}

void Triangulo::calcularAltura(float base_) {
    // Calcula a altura com base na fórmula da área de um triângulo equilátero
    altura = (base * sqrt(3))/2;
}

float Triangulo::getPerimetro() {
    return 3 * base;
}

float Triangulo::getArea() {
    return (base * altura)/2;
}
