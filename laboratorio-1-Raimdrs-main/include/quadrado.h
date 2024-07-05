#ifndef QUADRADO_H
#define QUADRADO_H
#include <string>
/**
 * @file    quadrado.h
 * @brief   Cabeçalho da classe Quadrado
*/
 
class Quadrado{
	private:
		float lado; /*!< Valor lado. */
std::	string formaGeo; /*!< Nome da forma. */
	public:
		//! Um construtor paramentizado.
    	/*!
      	recebe medidas do lado,  o nome da forma.
      	*/
		Quadrado(float lado_, std::string formaGeo_);
		//!destrutor.
		~Quadrado();

		//! Metodo que retorna um valor float referente o tamanho do lado
		float getLado();
		
		//! Metodo que atribui um valor float ao tamanho do lado
		/*!
			\param lado_ um argumento float.
		*/
		void setLado(float lado_);
		
		//! Metodo que retorna um valor float referente o calculo do perimetro
		float getPerimetro();
		
		//!	Metodo que retorna um valor float referente o calculo da area
		float getArea();
		
		//! Metodo que retorna um nome da forma geometrica
		std::string getFormaGeo();
		
		//! Metodo que atribui uma string ao nome da forma
		/*!
			\param formaGeo_ um argumento string.
		*/
		void setFormaGeo(std::string formaGeo_);
};

#endif

