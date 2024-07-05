#include "controll.h"
#include "triangulo.h"
#include "retangulo.h"
#include "quadrado.h"
#include "circulo.h"
#include "piramide.h"
#include "cubo.h"
#include "paralelepipedo.h"
#include "esfera.h"

#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

Controll::Controll(){}
Controll::~Controll(){}


void Controll::calcular(int tam, char *args[]){
	
	
  if (tam == 3 && std::string(args[1]) == "triangulo") {
    Triangulo* t = new Triangulo(atof(args[2]), "triangulo");
    std::cout << "Area do " << t->getFormaGeo() << ": " << std::setprecision(7) << t->getArea() << std::endl;
    std::cout << "Perimetro do " << t->getFormaGeo() << ": " << t->getPerimetro() << std::endl;
    delete t;
    } 

	if(string(args[1])=="retangulo"){
		Retangulo * r = new Retangulo(atof(args[2]),atof(args[3]),args[1]);
		cout << "Area do " << r->getFormaGeo() << ": " << r->getArea()<< endl;
		cout << "Perimetro do " << r->getFormaGeo() << ": " << r->getPerimetro() << endl;
		delete r;
	}

	if(string(args[1])=="quadrado"){
		Quadrado * q = new Quadrado(atof(args[2]),args[1]);
		cout << "Area do " << q->getFormaGeo() << ": " << q->getArea()<< endl;
		cout << "Perimetro do " << q->getFormaGeo() << ": " << q->getPerimetro() << endl;
		delete q;
	}

	if(string(args[1])=="circulo"){
		Circulo * c = new Circulo(atof(args[2]),args[1]);
		cout << "Area do " << c->getFormaGeo() << ": " << c->getArea()<< endl;
		cout << "Perimetro do " << c->getFormaGeo() << ": " << c->getPerimetro() << endl;
		delete c;
	}

	if(string(args[1])=="piramide"){
		Piramide * p = new Piramide(atof(args[2]),atof(args[3]),args[1]);
		cout << "Area da " << p->getFormaGeo() << ": " << p->getArea()<< endl;
		cout << "Volume da " << p->getFormaGeo() << ": " << p->getVolume() << endl;
		delete p;
	}

	if(string(args[1])=="cubo"){
		Cubo * c = new Cubo(atof(args[2]),args[1]);
		cout << "Area do " << c->getFormaGeo() << ": " << c->getArea()<< endl;
		cout << "Volume do " << c->getFormaGeo() << ": " << c->getVolume() << endl;
		delete c;
	}

	if(string(args[1])=="paralelepipedo"){
		Paralelepipedo * p = new Paralelepipedo(atof(args[4]),atof(args[3]),atof(args[2]),args[1]);
		cout << "Area do " << p->getFormaGeo() << ": " << p->getArea()<< endl;
		cout << "Volume do " << p->getFormaGeo() << ": " << p->getVolume() << endl;
		delete p;
	}

	if(string(args[1])=="esfera"){
		Esfera * e = new Esfera(atof(args[2]),args[1]);
		cout << "Area da " << e->getFormaGeo() << ": " << e->getArea()<< endl;
		cout << "Volume da " << e->getFormaGeo() << ": " << e->getVolume() << endl;
		delete e;
	}
		
}

void Controll::imprimirTutorial(){

std::cout << "\ntem algo errado... :) verifique os argumentos passados!\n\n"
<< "=======================================================================\n"
<<"./geometria" << " `nome da forma geometrica`" << " `medida`"<<" `medida` "<< "...\n"
<< "===============================Opções====================================\n\n"

<<"./geometria esfera raio\n"
<<"./geometria paralelepipedo aresta1 aresta2 aresta3\n"
<<"./geometria cubo lado\n"
<<"./geometria piramide base altura\n" 
<<"./geometria circulo raio\n"
<<"./geometria quadrado lado\n"
<<"./geometria retangulo base altura\n"
<<"./geometria triangulo base altura\n"
<< std::endl;
}
