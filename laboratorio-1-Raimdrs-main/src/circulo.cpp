#include "circulo.h"
#include <math.h>


Circulo::Circulo(float raio_,std::string formaGeo_):raio(raio_),formaGeo(formaGeo_){}
Circulo::~Circulo(){
}

float Circulo::getRaio(){
	return raio;
}
void Circulo::setRaio(float raio_){
	raio = raio_;
}
std::string Circulo::getFormaGeo(){
	return formaGeo;
}

void Circulo::setFormaGeo(std::string formaGeo_){
	formaGeo = formaGeo_;
}

float Circulo::getPerimetro(){
	return 2 * PI * raio;
}
float Circulo::getArea(){
	return PI * pow(raio,2);
}
