#ifndef CUBO_H
#define CUBO_H
#include <string>
 /**
 * @file    cubo.h
 * @brief   Cabeçalho da classe cubo
*/


class Cubo{
	private:
		float aresta; /*!< Valor de uma das aresta. */
std::	string formaGeo;  /*!< Nome da forma. */

	public:
		//! Um construtor paramentizado.
    	/*!
      	recebe medidas de uma das aresta e o nome da forma.
      	*/
		Cubo(float aresta_,std::string formaGeo_);

		//!destrutor da classe.
		~Cubo();
		
		//! Metodos  getters e setters, atribui e acessa valores dos atributos da classe.
		/*!
			\param aresta_ um argumento float.
		*/
		float getAresta();
		void setAresta(float aresta_);

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

