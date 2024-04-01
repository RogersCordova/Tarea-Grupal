#include <iostream>
#include <string>

int main() {
    std::cout << "INTRODUCE UNA PALABRA O UN NUMERO: ";
    std::string input;
    std::cin >> input;

    int start = 0;
    int end = input.length() - 1;

    // SALTAR CARACTERES NO ALFANUMERICOS
    while (start < end && !std::isalnum(input[start])) {
        start++;
    }
    while (start < end && !std::isalnum(input[end])) {
        end--;
    }

    // COMPARAR CARACTERES DESDE EL PRINCIPIO Y EL FINAL DE LA CADENA
    while (start < end) {
        if (std::tolower(input[start]) != std::tolower(input[end])) {
            std::cout << "LA ENTRADA NO ES UN PALINDROMO." << std::endl;
            return 0;
        }
        start++;
        end--;
    }

    std::cout << "LA ENTRADA ES UN PALINDROMO." << std::endl;
    return 0;
}
