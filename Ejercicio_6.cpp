#include <iostream>
#include <string>
using namespace std;

string unidades[] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
string especiales[] = {"", "once", "doce", "trece", "catorce", "quince", "dieciseis", "diecisiete", "dieciocho", "diecinueve"};
string decenas[] = {"", "diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
string centenas[] = {"", "ciento", "doscientos", "trescientos", "cuatrocientos", "quinientos", "seiscientos", "setecientos", "ochocientos", "novecientos"};

string convertirCentenas(int numero) {
    if (numero == 100)
        return "cien";
    else
        return centenas[numero / 100] + " " + convertirDecenas(numero % 100);
}

string convertirDecenas(int numero) {
    if (numero < 10)
        return unidades[numero];
    else if (numero >= 10 && numero <= 19)
        return especiales[numero % 10];
    else
        return decenas[numero / 10] + " " + unidades[numero % 10];
}

string convertirMiles(int numero) {
    if (numero < 1000)
        return convertirCentenas(numero);
    else
        return unidades[numero / 1000] + " mil " + convertirCentenas(numero % 1000);
}

string convertirNumeroALetras(int numero) {
    if (numero == 0)
        return "cero";
    else
        return convertirMiles(numero);
}

int main() {
    int numero;
    
    cout << "Ingrese un número entre 1 y 9999: ";
    cin >> numero;

    if (numero < 1 || numero > 9999) {
        cout << "Número fuera de rango." << endl;
    } else {
        cout << "El número " << numero << " en letras es: " << convertirNumeroALetras(numero) << endl;
    }

    return 0;
}
