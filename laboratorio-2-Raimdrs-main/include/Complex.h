#ifndef COMPLEX_H
#define COMPLEX_H

#include <cmath>

struct Complex {
    double real;
    double imag;

    Complex operator+(const Complex& z) {
        return {real + z.real, imag + z.imag};
    }

    Complex operator-(const Complex& z) {
        return {real - z.real, imag - z.imag};
    }

    Complex operator*(const Complex& z) {
        return {real * z.real - imag * z.imag, real * z.imag + imag * z.real};
    }

    double modulus() {
        double result = sqrt(real * real + imag * imag);
        result = round(result * 100.0) / 100.0;
        return result;
    }
};

#endif // COMPLEX_H
