#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;

string toLetters(const double& num) {
    stringstream ss;
    ss << num;
    string str;
    ss >> str;

    string result;

    if (num < 0) {
        result += '-';
    }

    for (int i = 0; i < str.length(); i++) {
        if (isdigit(str[i])) {
            result += str[i] + 'A' - '0';
        } else {
            result += str[i];
        }
    }

    if (str.find(".") != string::npos) {
        int pos = str.find(".") + 1;
        double factor = 1.0;
        while (pos < str.length()) {
            int digit = str[pos] - '0';
            double temp = (double) digit / factor;
            result += (int)(temp * 26) + 'A';
            factor *= 10;
            pos++;
        }
    }

    return result;
}

int main() {
    double num;
    cout << "INGRESE UN NUMERO CON O SIN PUNTOR DECIMALES: ";
    cin >> num;
    string result = toLetters(num);
    cout << "EL NUMERO EN LETRAS ES: " << result << endl;
    return 0;
}
