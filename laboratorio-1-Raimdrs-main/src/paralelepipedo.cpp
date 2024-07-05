#include "paralelepipedo.h"


Paralelepipedo::Paralelepipedo(float aresta1_, float aresta2_ , float aresta3_, std::string formaGeo_)
:aresta1(aresta1_),aresta2(aresta2_),aresta3(aresta3_),formaGeo(formaGeo_){}

Paralelepipedo::~Paralelepipedo(){
}

float Paralelepipedo::getAresta1(){
	return aresta1;
}
void Paralelepipedo::setAresta1(float aresta1_){
	aresta1 = aresta1_;
}

float Paralelepipedo::getAresta2(){
	return aresta2;
}
void Paralelepipedo::setAresta2(float aresta2_){
	aresta2 = aresta2_;
}

float Paralelepipedo::getAresta3(){
	return aresta3;
}

void Paralelepipedo::setAresta3(float aresta3_){
	aresta3 = aresta3_;
}

std::string Paralelepipedo::getFormaGeo(){
	return formaGeo;
}
void Paralelepipedo::setFormaGeo(std::string formaGeo_){
	formaGeo = formaGeo_;
}

float Paralelepipedo::getVolume(){
	return aresta1  * aresta2  * aresta3;
}

float Paralelepipedo::getArea(){
	
	return 2*((aresta1  * aresta2) +(aresta1  * aresta3) + (aresta2  * aresta3));
}
