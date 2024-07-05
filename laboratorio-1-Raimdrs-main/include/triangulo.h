#ifndef TRIANGULO_H
#define TRIANGULO_H
#include <string>

class Triangulo {
private:
    float base;          /*!< Valor base. */
    std::string formaGeo; /*!< Nome da forma. */
    float altura;        /*!< Valor altura. */

public:
    //! Um construtor parametrizado.
    /*!
       Recebe medida da base e o nome da forma.
    */
    Triangulo(float base_, std::string formaGeo_);

    //! Destrutor.
    ~Triangulo();

    //! Método que retorna um valor float referente ao tamanho da base.
    float getBase();

    //! Método que atribui um valor float ao tamanho da base.
    /*!
        \param base_ um argumento float.
    */
    void setBase(float base_);

    //! Método que retorna um nome da forma geométrica.
    std::string getFormaGeo();

    //! Método que atribui uma string ao nome da forma.
    /*!
        \param formaGeo_ um argumento string.
    */
    void setFormaGeo(std::string formaGeo_);

    //! Método que calcula automaticamente a altura com base na base fornecida.
    /*!
        \param base_ um argumento float representando a base do triângulo.
    */
    void calcularAltura(float base_);

    //! Método que retorna um valor float referente ao cálculo do perímetro.
    float getPerimetro();

    //! Método que retorna um valor float referente ao cálculo da área.
    float getArea();
};

#endif
