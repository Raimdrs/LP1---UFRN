#ifndef ESFERA_H
#define ESFERA_H
#define PI 3.1416
#include <string>
/**
 * @file    esfera.h
 * @brief   Cabeçalho da classe Esfera
*/
 

class Esfera{
	private:
		float raio; /*!< Valor do raio. */
std::	string formaGeo;  /*!< Nome da forma. */

	public:
		//! Um construtor paramentizado.
    	/*!
      	recebe medidas do raio e o nome da forma.
      	*/
		Esfera(float raio_,std::string formaGeo_);

		//!destrutor da classe.
		~Esfera();
		
		//! Metodos  getters e setters, atribui e acessa valores dos atributos da classe.
		/*!
			\param raio_ um argumento float.
		*/
		float getRaio();
		void setRaio(float raio_);

		//! Metodo que retorna um nome da forma geometrica
		std::string getFormaGeo();
		
		//! Metodo que atribui uma string ao nome da forma
		/*!
			\param formaGeo_ um argumento string.
		*/
		void setFormaGeo(std::string formaGeo_);

		//! Metodo que retorna um valor float referente o calculo do volume
		float getVolume();

		//! Metodo que retorna um valor float referente o calculo da area
		float getArea();
};

#endif
