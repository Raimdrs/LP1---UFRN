#include "controll.h"
#include <iostream>

 int main(int argc, char *argv[]){
	
	if (argc >= 3 &&  argc <= 5) { /*!< testar se foi passado os argumentos */ 
	Controll calc; /*!< constroi classe controll usando construtor padrão */ 
	calc.calcular(argc, argv); /*!< passa os argumentos recebido na execucão para funcão calcular*/ 

		
	}else{

		Controll::imprimirTutorial();/*!< demonstrar como é  passado os argumentos para o programa*/ 
	}

}