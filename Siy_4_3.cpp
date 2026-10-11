/******************************************************************************

Write a program that solves for side c given the two sides a, b and angle C.
Law of Cosines
a^2 = b^2 + c^2 – 2bc cos A
b^2 = a^2 + c^2 – 2ac cos B
c^2 = a^2 + b^2 – 2ab cos C

*******************************************************************************/
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    //input
    double a, b, angle_C, c, C, Angle_c;
    
    cout << "Enter Value of side a: ";
    cin >> a;
    
    cout << "Enter Value of side b: ";
    cin >> b;
    
    cout << "Enter Value of Angle C (in Degrees): ";
    cin >> angle_C;
    
    //constant Value
    const double PI = 3.14159;
    
    //process
    C = angle_C * PI / 180;
    
    Angle_c = sqrt(pow(a, 2) + pow(b, 2) - 2 * a * b * cos(C));
    
    //output
    cout << "The value of c is: " << Angle_c <<endl;
    
    return 0;
}
