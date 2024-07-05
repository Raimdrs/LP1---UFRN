#ifndef CONTROLL_H
#define CONTROLL_H
/**
 * @file    controll.h
 * @brief   Cabeçalho da classe controll
 * A classe controll ira realizar o controle dos argumentos passado na execucao
  *do programar e realizar as chamadas dos metodos para tais calculos.
*/
 

class Controll{
private:

public:
		//! Um construtor paramentizado.
    	/*!
      	recebe medidas da base, altura e o nome da forma.
      	*/
		Controll();

		//!destrutor da classe.
		~Controll();
		
		//! Metodo que recebe parametros da execucao do programa
		/*!
			\param tam um argumento inteiro, (argc).
			\param ponteiro de char, (argv).
		*/
		void calcular(int tam, char *args[]);

		//! Metodo imprimi como deve ser executado o programa.
static	void imprimirTutorial();

};

#endif

