#include <iostream> 
using namespace std; 
int main() { 
    int num1, num2, choice, sum, rest, mult, div; 
    while (true) {
        cout << "MENU:" << endl; 
        cout << "1. SUMA: " << endl; 
        cout << "2. RESTA: " << endl; 
        cout << "3. MULTIPLICACION: " << endl; 
        cout << "4. DIVISION: " << endl;
        cout << "5. SALIR: " << endl; 
        cout << "INGRESA UN NUMERO DEL MENU: "; 
        cin >> choice; 
        switch (choice) { 
            case 1: cout << "INGRESE EL PRIMER NUMERO: "; 
            cin >> num1; 
            cout << "INGRESE EL SEGUNDO NUMERO: "; 
            cin >> num2; 
            sum = num1 + num2; 
            cout << "LA SUMA ENTRE " << num1 << " Y " << num2 << " ES: " << sum << endl; 
            break; 
            case 2: cout << "INGRESE EL PRIMER NUMERO: "; 
            cin >> num1; 
            cout << "INGRESE EL SEGUNDO NUMERO: "; 
            cin >> num2; 
            rest = num1 - num2; 
            cout << "LA RESTA ENTRE " << num1 << " Y " << num2 << " ES: " << rest << endl; 
            break; 
            case 3: cout << "INGRESE EL PRIMER NUMERO: "; 
            cin >> num1; 
            cout << "INGRESE EL SEGUNDO NUMERO: "; 
            cin >> num2; 
            mult = num1 * num2; cout << "LA MULTIPLICACION ENTRE " << num1 << " Y " << num2 << " ES: " << mult << endl; 
            break; 
            case 4: cout << "INGRESE EL PRIMER NUMERO: "; 
            cin >> num1; 
            cout << "INGRESE EL SEGUNDO NUMERO: "; 
            cin >> num2; 
            if (num2 == 0) { 
                cout << "ERROR: NO DE PERMITE LA DIVISION POR CERO." << endl; 
            } 
            else { 
                div = (float)num1 / num2; 
                cout << "LA DIVISION ENTRE " << num1 << " Y " << num2 << " ES: " << div << endl; 
    		}   
		}
	}
}
