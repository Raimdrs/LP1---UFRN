#ifndef PIRAMIDE_H
#define PIRAMIDE_H
#include <string>
/**
 * @file    piramide.h
 * @brief   Cabeçalho da classe Piramide
*/

class Piramide{
	private:
		float arestaBase; /*!< Valor aresta da base. */
		float altura; /*!< Valor altura. */
std::	string formaGeo;  /*!< Nome da forma. */
	public:
		//! Um construtor paramentizado.
    	/*!
      	recebe medidas da base, altura e o nome da forma.
      	*/
		Piramide(float arestaBase_,float altura_,std::string formaGeo_);

		//!destrutor da classe.
		~Piramide();

		//! Metodos  getters e setters, atribui e acessa valores dos atributos da classe.
		/*!
			\param arestaBase_ um argumento float.
			\param altura_ um argumento float.
		*/
		float getArestaBase();
		void setArestaBase(float arestaBase_);
		float getAltura();
		void setAltura(float altura_);

		//! Metodo que retorna um nome da forma geometrica
		std::string getFormaGeo();
		
		//! Metodo que atribui uma string ao nome da forma
		/*!
			\param formaGeo_ um argumento string.
		*/
		void setFormaGeo(std::string formaGeo_);

		
		//! Metodo que retorna um valor float referente o calculo da area
		float getArea();
				
		//! Metodo que retorna um valor float referente o calculo do volume
		float getVolume();
};

#endif

