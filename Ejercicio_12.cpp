#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string decimalToHexadecimal(int decimal) {
    stringstream ss;
    ss << hex << decimal; 
    return ss.str();
}

int main() {
    int decimal;
    
    cout << "Ingrese un numero decimal: ";
    cin >> decimal;

    string hexadecimal = decimalToHexadecimal(decimal);

    cout << "El numero decimal " << decimal << " en hexadecimal es: " << hexadecimal << endl;

    return 0;
}
