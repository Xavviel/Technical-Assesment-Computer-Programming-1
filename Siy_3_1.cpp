/******************************************************************************

Write a program that will display your weekly class schedule in a listed view.
Sample output:
	Day 		Time		Course Code 	Section 		Room 
	Monday 	7:00-8:50 	CCS003L 		W01 		F707

*******************************************************************************/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    //input 
    string day, time, courseCode, section, room;
    
    cout << "Enter Day: ";
    getline(cin, day);
    
    cout << "Enter Time: ";
    getline(cin, time);
    
    cout << "Enter Course Code: ";
    getline(cin, courseCode);
    
    cout << "Enter Section: ";
    getline(cin, section);
    
    cout << "Enter Room: ";
    getline(cin, room);
    
    //output
    cout << "\n=====Weeky Class Schedule=====\n" <<endl;
    cout << "Day\t\tTime\t\tCourse Code\tSection\t\tRoom" <<endl;
    
    cout << day <<"\t" 
     << time <<"\t"
     << courseCode <<"\t" 
     << section <<"\t" 
     << room <<"\t" <<endl;

    return 0;
}
