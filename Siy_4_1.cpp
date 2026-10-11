/******************************************************************************

Write a program that solves for the hypotenuse of a right triangle. The entry of data should accept sides
with decimal portions.

*******************************************************************************/
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    //input 
    double a, b, hypo;
    
    cout << "Enter the Value of side A: ";
    cin >> a;
    
    cout << "Enter the Value of side B: ";
    cin >> b;
    
    //process
    hypo = sqrt(pow(a, 2) + pow(b, 2));
    
    //output
    cout << "The Value of the Hypotenuse of a Right Triangle is: " << hypo <<endl;

    return 0;
}
