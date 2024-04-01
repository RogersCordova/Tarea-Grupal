#include <iostream>
#include <string>

std::string convertirARomano(int numero) {
    if (numero < 1000 || numero > 3999) {
        return "Número fuera de rango";
    }

    std::string romanos = "";

    // Miles
    int miles = numero / 1000;
    for (int i = 0; i < miles; i++) {
        romanos += "M";
    }

    // Centenas
    int centenas = (numero % 1000) / 100;
    if (centenas == 9) {
        romanos += "CM";
    } else if (centenas >= 5) {
        romanos += "D";
        for (int i = 0; i < centenas - 5; i++) {
            romanos += "C";
        }
    } else if (centenas == 4) {
        romanos += "CD";
    } else {
        for (int i = 0; i < centenas; i++) {
            romanos += "C";
        }
    }

    // Decenas
    int decenas = (numero % 100) / 10;
    if (decenas == 9) {
        romanos += "XC";
    } else if (decenas >= 5) {
        romanos += "L";
        for (int i = 0; i < decenas - 5; i++) {
            romanos += "X";
        }
    } else if (decenas == 4) {
        romanos += "XL";
    } else {
        for (int i = 0; i < decenas; i++) {
            romanos += "X";
        }
    }

    // Unidades
    int unidades = numero % 10;
    if (unidades == 9) {
        romanos += "IX";
    } else if (unidades >= 5) {
        romanos += "V";
        for (int i = 0; i < unidades - 5; i++) {
            romanos += "I";
        }
    } else if (unidades == 4) {
        romanos += "IV";
    } else {
        for (int i = 0; i < unidades; i++) {
            romanos += "I";
        }
    }

    return romanos;
}

int main() {
    int numero;
    std::cout << "Ingrese un número arábigo entre 1000 y 3999: ";
    std::cin >> numero;

    std::string romano = convertirARomano(numero);
    std::cout << "El número romano es: " << romano << std::endl;

    return 0;
}

