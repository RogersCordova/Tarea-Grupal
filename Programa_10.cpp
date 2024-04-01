#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num1, num2, multiplier, multiplicand, partialProduct;
    int product = 0;
    int i = 0;

    // Input the two numbers
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Multiplicand is the first number
    multiplicand = num1;

    // Multiplier is the second number
    multiplier = num2;

    // Multiplication of the two numbers
    while(multiplier != 0)
    {
        // Get the last digit of multiplier
        partialProduct = multiplicand * (multiplier % 10);

        // Accumulate the product
        product += (partialProduct % 10) * pow(10, i);

        // Divide the multiplier by 10
        multiplier /= 10;

        // Increment the index i
        i++;

        // Display the result of each step
        if(multiplier % 10 != 0)
        {
            cout << "Step " << i << ": " << num1 << " x " << multiplier % 10 << " = " << partialProduct % 10 << " carry: " << (partialProduct / 10) << " ; ";
            cout << "Partial product = " << (partialProduct % 10) << " ; ";
            cout << "Product so far: " << product << " ; " << endl;
        }
        else
        {
            cout << "Step " << i << ": " << num1 << " x " << multiplier % 10 << " = " << partialProduct % 10 << " ; " << endl;
        }
    }

    // Display the final product
    cout << "The product is: " << product << endl;

    return 0;
}
