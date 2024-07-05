#include "retangulo.h"


Retangulo::Retangulo(float base_,float altura_,std::string formaGeo_)
:base(base_),altura(altura_),formaGeo(formaGeo_){}

Retangulo::~Retangulo(){
}

float Retangulo::getBase(){
	return base;
}
void Retangulo::setBase(float base_){
	base = base_;
}

float Retangulo::getAltura(){
	return altura;
}
void Retangulo::setAltura(float altura_){
	altura = altura_;
}

std::string Retangulo::getFormaGeo(){
	return formaGeo;
}

void Retangulo::setFormaGeo(std::string formaGeo_){
	formaGeo = formaGeo_;
}

float Retangulo::getPerimetro(){
	return 2 * (altura + base);
}
float Retangulo::getArea(){
	return altura * base;
}
