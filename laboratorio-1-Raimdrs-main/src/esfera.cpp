#include "esfera.h"
#include <math.h>


Esfera::Esfera(float raio_,std::string formaGeo_)
:raio(raio_),formaGeo(formaGeo_){}

Esfera::~Esfera(){
}

float Esfera::getRaio(){
	return raio;
}
void Esfera::setRaio(float raio_){
	raio = raio_;
}

std::string Esfera::getFormaGeo(){
	return formaGeo;
}

void Esfera::setFormaGeo(std::string formaGeo_){
	formaGeo = formaGeo_;
}

float Esfera::getVolume(){
	return (4 * PI  * pow(raio,3))/3;
}

float Esfera::getArea(){
	return 4  * PI  * pow(raio,2);
}
