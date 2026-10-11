/******************************************************************************

Given the table below, declare the following variables with the corresponding data types and initialization values. 
Output the variable names together with the values.

Variable name	Data Type		Initial value
Number			integer			10
Letter			character		a
Result			boolean 		true
Float			float			3.14 


*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    //input 
    int number = 10;
    char letter = 'a';
    bool result = true;
    float Float = 3.14;
    
    
    //output
    cout << "Number: " << number <<endl;
    cout << "Letter: " << letter <<endl;
    cout << boolalpha;
    cout << "Result: " << result <<endl;
    cout << "Float: " << Float <<endl;

    return 0;
}
