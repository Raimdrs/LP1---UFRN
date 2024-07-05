#ifndef RETANGULO_H
#define RETANGULO_H
#include <string>
/**
 * @file    retangulo.h
 * @brief   Cabeçalho da classe Retangulo
*/
 
class Retangulo{
	private:
		float base;  /*!< Valor base. */
		float altura; /*!< Valor altura. */
std::	string formaGeo;  /*!< Nome da forma. */
	public:
		//! Um construtor paramentizado.
    	/*!
      	recebe medidas da base, altura e o nome da forma.
      	*/
		Retangulo(float base_,float altura_,std::string formaGeo_);
		//!destrutor da classe.
		~Retangulo();
		
		//! Metodos  getters e setters, atribui e acessa valores dos atributos da classe.
		/*!
			\param altura_ um argumento float.
			\param base_ um argumento float.
		*/
		float getBase();
		void setBase(float base_);

		float getAltura();
		void setAltura(float altura_);
		

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