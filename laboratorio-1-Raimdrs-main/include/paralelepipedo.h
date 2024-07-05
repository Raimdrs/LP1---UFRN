#ifndef PARALELEPIPEDO_H
#define PARALELEPIPEDO_H
#include <string>
/**
 * @file    paralelepipedo.h
 * @brief   Cabeçalho da classe Paralelepipedo
*/


class Paralelepipedo{
	private:
		float aresta1;/*!< Valor de uma das aresta. */
		float aresta2;/*!< Valor de uma das aresta. */
		float aresta3; /*!< Valor de uma das aresta. */
std::	string formaGeo;  /*!< Nome da forma. */

	public:
		//! Um construtor paramentizado.
    	/*!
      	recebe medidas das aresta 1, 2, 3 e o nome da forma.
      	*/
		Paralelepipedo(float aresta1_, float aresta2_ , float aresta3_, std::string formaGeo_);

		//!destrutor da classe.
		~Paralelepipedo();
		
		
		//! Metodos  getters e setters, atribui e acessa valores dos atributos da classe.
		/*!
			\param aresta1_ um argumento float.
			\param aresta2_ um argumento float.
			\param aresta2_ um argumento float.
		*/
		float getAresta1();
		void setAresta1(float aresta1_);

		float getAresta2();
		void setAresta2(float aresta2_);

		float getAresta3();
		void setAresta3(float aresta3_);

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