#include "cubo.h"
#include <math.h>


Cubo::Cubo(float aresta_,std::string formaGeo_):aresta(aresta_),formaGeo(formaGeo_){}
Cubo::~Cubo(){
}

float Cubo::getAresta(){
	return aresta;
}
void Cubo::setAresta(float aresta_){
	aresta = aresta_;
}

std::string Cubo::getFormaGeo(){
	return formaGeo;
}

void Cubo::setFormaGeo(std::string formaGeo_){
	formaGeo = formaGeo_;
}

float Cubo::getArea(){
	return 6 * pow(aresta,2);
}
float Cubo::getVolume(){
	return pow(aresta,3);
}
