#include "quadrado.h"

Quadrado::Quadrado(float lado_, std::string formaGeo_)
:lado(lado_),formaGeo(formaGeo_){}

Quadrado::~Quadrado(){
}

float Quadrado::getLado(){
	return lado;
}
void Quadrado::setLado(float lado_){
	lado = lado_;
}
std::string Quadrado::getFormaGeo(){
	return formaGeo;
}
void Quadrado::setFormaGeo(std::string formaGeo_){
	formaGeo = formaGeo_;
}
float Quadrado::getPerimetro(){
	return 4 * lado;
}
float Quadrado::getArea(){
	return lado * lado;
}
