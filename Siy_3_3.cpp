/******************************************************************************

Create a program that will accept two numbers. Display the sum, difference, product, remainder and quotient.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    //input 
    int num1, num2, sum, difference, product, remainder, quotient;
    
    cout << "Enter Number 1: ";
    cin >> num1;
    
    cout << "Enter Number 2: ";
    cin >> num2;
    
    //process
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    remainder = num1 % num2;
    quotient = num1 / num2;
    
    //output
    cout << "\n=====Result=====\n" <<endl;
    
    cout << "Sum: " << sum <<endl;
    cout << "Difference: " << difference <<endl;
    cout << "Product: " << product <<endl;
    cout << "Quotient: " << quotient << endl;
    cout << "Remainder: " << remainder <<endl;

    return 0;
}
