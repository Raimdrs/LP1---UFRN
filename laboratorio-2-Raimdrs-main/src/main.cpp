#include <iostream>
#include "Complex.h"

using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 6) {
        cout << "Uso: " << argv[0] << " a b c d operacao (+, -, *, |)" << endl;
        return 1;
    }

    double a = atof(argv[1]);
    double b = atof(argv[2]);
    double c = atof(argv[3]);
    double d = atof(argv[4]);
    char operacao = argv[5][0];

    Complex z1 = {a, b};
    Complex z2 = {c, d};
    Complex resultado;

    switch (operacao) {
        case '+':
            resultado = z1 + z2;
            cout << resultado.real << "+" << resultado.imag << "i" << endl;
            break;
        case '-':
            resultado = z1 - z2;
            cout << resultado.real << (resultado.imag >= 0 ? "+" : "") << resultado.imag << "i" << endl;
            break;
        case '*':
            resultado = z1 * z2;
            cout << resultado.real << (resultado.imag >= 0 ? "+" : "") << resultado.imag << "i" << endl;
            break;
        case '|':
            cout << z1.modulus() << ";" << z2.modulus() << endl;
            break;
        default:
            cout << "Operacao nao reconhecida." << endl;
            return 1;
    }

    return 0;
}
