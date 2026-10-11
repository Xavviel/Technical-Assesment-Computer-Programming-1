/******************************************************************************

The user will input a Philippine amount, then the said amount will be converted to different currencies namely: 
US Dollar, Euro, Yuan, Koruna, Krone, Sheqel and Dinar

The amount's equivalent to:
US Dollar is 	: 	1.000
Euro			:	0.734719
Yuan			: 	6.346934
Koruna			:	18.77263
Krone			:	5.449007
Sheqel			:	3.726334
Dinar			:	0.274588

The currency exchange value is based on October 11, 2026
*******************************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //input
    double pesos; 
    double dollar = 0.016;
    double euro = 0.014;
    double yuan = 0.11;
    double koruna = 0.35;
    double krone = 0.15;
    double sheqel = 0.049;
    double dinar = 0.0050;
    double USD, EUR, CYN, CZK, NOK, ILS, KWD; 
    
    cout << "Enter amount of Philippine Peso: ₱";
    cin >> pesos;
    
    //process
    USD = pesos * dollar;
    EUR = pesos * euro;
    CYN = pesos * yuan;
    CZK = pesos * koruna;
    NOK = pesos * krone;
    ILS = pesos * sheqel;
    KWD = pesos * dinar;
    
    //output
     cout << fixed << setprecision (2) <<endl;
     
    cout << "\n=====Currency Exchange=====\n" <<endl;
    cout << "US Dollar: $" << USD <<endl;
    cout << "Euro: €" << EUR <<endl;
    cout << "Chinese Yuan: ¥" << CYN <<endl;
    cout << "Czech Koruna: Kč" << CZK <<endl;
    cout << "Norwegian Krone: kr" << NOK <<endl;
    cout << "Israeli Sheqel: ₪" << ILS <<endl;
    cout << "Dinar: د.ك" << KWD << endl;

    return 0;
}
