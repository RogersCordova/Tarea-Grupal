#include <iostream>

using namespace std;

int main() {
    int opcion;
    float num1, num2, resultado;

    do {
        // Mostrar el menú
        cout << "Menu de Operaciones" << endl;
        cout << "1. Suma" << endl;
        cout << "2. Resta" << endl;
        cout << "3. Multiplicacion" << endl;
        cout << "4. Division" << endl;
        cout << "5. Salir" << endl;
        cout << "Ingrese la opcion deseada: ";
        cin >> opcion;

        // Procesar la opción seleccionada
        switch (opcion) {

