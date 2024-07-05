#ifndef CIRCULO_H
#define CIRCULO_H
#define PI 3.1416
#include <string>
/**
 * @file    circulo.h
 * @brief   Cabeçalho da classe circulo
*/


class Circulo{
	private:
		float raio; /*!< Valor do raio. */
std::	string formaGeo;  /*!< Nome da forma. */

	public:
		//! Um construtor paramentizado.
    	/*!
      	recebe medidas do raio e nome da forma.
      	*/
		Circulo(float raio_,std::string formaGeo_);

		//!destrutor da classe.
		~Circulo();
		
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

		//! Metodo que retorna um valor float referente o calculo do perimetro
		float getPerimetro();

		//! Metodo que retorna um valor float referente o calculo da area
		float getArea();
};

#endif
