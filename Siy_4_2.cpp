/******************************************************************************

Create a program that generates monthly payroll of the employees. The specifications are as follows:

•	Employee Information (Input)
- Payroll period (date)
- Employee ID
- Employee name
- Monthly salary
- Lates and absences (in minutes)
Note: For lates and absences, convert the minutes to hours by dividing it by 60 minutes.
    Hourly rate of the employee can be computed by dividing the monthly salary by 30 then divide the result by 8 hours per day.
•	Deduction
- Lates and absences (amount)
- Philhealth employee contribution (constant value of 1000)
- Pag-ibig employee contribution - (constant value of 800)
- SSS employee contribution (constant value of 1,200)
- Tax (12% of the Monthly Salary)

Payslip Output (Note: The format of the output should look exactly like the one below)
Assuming that the late and absences of the sample employee is 30 mins for the whole month.


*******************************************************************************/
#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    //input
    string employeeName, payRoll_period, employeeId;
    double monthlySalary, lateAbsences;
    double philhealth, pag_Ibig, SSS, tax;
    double lateHours, hourlyRate, lateDeduction, Tax, totalEarnings, totalDeduction, netPay;
    
    cout << "Enter Employee Name: ";
    getline(cin, employeeName);
    
    cout << "Enter Employee ID: ";
    getline(cin, employeeId);
    
    cout << "Enter Payroll Period: ";
    getline(cin, payRoll_period);
    
    cout << "Enter Monthly Salary: ";
    cin >> monthlySalary;
    
    cout << "Enter Late and Absences (in Minutes): ";
    cin >> lateAbsences;
    
    //constant values
    philhealth = 1000;
    pag_Ibig = 800;
    SSS = 1200;
    tax = 0.12;
    
    //process
    lateHours = lateAbsences / 60;
    hourlyRate = (monthlySalary / 30) / 8;
    lateDeduction = lateHours * hourlyRate;
    Tax = monthlySalary * tax;
    totalEarnings = monthlySalary;
    totalDeduction = lateDeduction + philhealth + pag_Ibig + SSS + Tax;
    netPay = totalEarnings - totalDeduction;
    
    //output
    cout << fixed << setprecision(2) <<endl;
    
    cout <<"\n\t\tFEU Institute of Technology\n\n";
    
    cout << "Employee ID: " << employeeId
         << "\t\tPayroll Period: " << payRoll_period <<endl;
         
    cout << "Employee Name: " << employeeName <<endl;
    
    cout << "\nINCOME\t\t\t\tDEDUCTIONS\n";
    
    cout << "Monthly Salary: ₱" << monthlySalary
         << "\tLates and Absences:  ("<< lateDeduction <<")\n";
    
    cout << "\t\t\t\tPhilhealth:  ("<< philhealth <<")\n";
    cout << "\t\t\t\tPagibig:  ("<< pag_Ibig <<")\n";
    cout << "\t\t\t\tSSS:  ("<< SSS <<")\n";
    cout << "\t\t\t\tWitholding Tax:  ("<< Tax <<")\n";
    
    
    
    cout << "\nTotal Earnings: ₱" << totalEarnings <<endl;
    cout << "Total Deductions: ₱" << totalDeduction <<endl;
    cout << "Net Pay: ₱" << netPay <<endl;
    
    
    return 0;
}
