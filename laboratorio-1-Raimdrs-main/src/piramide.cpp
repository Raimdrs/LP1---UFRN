#include "piramide.h"
#include <math.h>


Piramide::Piramide(float arestaBase_,float altura_,std::string formaGeo_)
:arestaBase(arestaBase_),altura(altura_),formaGeo(formaGeo_){}
Piramide::~Piramide(){
}

float Piramide::getArestaBase(){
	return arestaBase;
}
void Piramide::setArestaBase(float arestaBase_){
	arestaBase = arestaBase_;
}

float Piramide::getAltura(){
	return altura;
}
void Piramide::setAltura(float altura_){
	altura = altura_;
}
std::string Piramide::getFormaGeo(){
	return formaGeo;
}
void Piramide::setFormaGeo(std::string formaGeo_){
	formaGeo = formaGeo_;
}

float Piramide::getArea(){
    // calcular apótema = pitagoras
    float rbase = arestaBase / 2; /* raio da base */
    float apotema = sqrt(pow(rbase, 2) + pow(altura, 2)); /* pitagoras */

    // área base + área de uma face vezes 4
    float areaBase = pow(arestaBase, 2);
    float areaLateral = 4 * (arestaBase * apotema) / 2; /* 4 faces laterais */

    return areaBase + areaLateral; /* área total */
}

float Piramide::getVolume(){
	return (altura * pow(arestaBase, 2)) / 3;
}
