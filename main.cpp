//
//  main.cpp
//  C867 Performance Assessment
//
//  Created by Tiarah Durant on 9/27/22.
//

#include <iostream>
#include <cstring>
#include "roster.h"
#include "student.h"
#include "degree.h"
using namespace std;

int main() {
    const string studentData[] =
    
    {"A1,John,Smith,John1989@gmail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", "A5,Tiarah,Durant,tiarahdurant@gmail.com,21,14,28,16,SOFTWARE"};
    
    const int studentDataLength = sizeof(studentData) / sizeof(studentData[0]);
   
    //F1 personal information
    cout << "Scripting and Programming - Applications - C867\n"
    << "Language: C++\n"
    << "WGU Student ID: 009437777\n"
    << "Name: Tiarah Durant\n\n";
    
    //F2 ROSTER INSTANCE
    Roster* classRoster = new Roster(studentDataLength);
    
    //F3 ADDING STUDENTS TO CLASS ROSTER
    for (int i = 0; i < studentDataLength; i++) {
            classRoster->parse(studentData[i]);
        }
    
    //F4 CONVERTING PSEUDO CODE
    cout << "Printing All Data from Class Roster";
        classRoster->printAll();
        cout << "\n";

    classRoster->printInvalidEmails();
        cout << endl;
    
    cout << "Average Days for All Students" << endl;
        for (int i = 0; i < studentDataLength; i++) {
            string currentStudentID = classRoster->classRosterArray[i]->getID();
            classRoster->printAverageDaysInCourse(currentStudentID);
        }
        cout << endl;
    
    cout << "Printing all students in SOFTWARE Program" << endl;
        classRoster->printByDegreeProgram(DegreeProgram::SOFTWARE);
        cout << "\n";
    
    cout << "Removing Student with ID A3" << endl;
        classRoster->remove("A3");
        cout << "\n";
    
    cout << "Printing All Data from Class Roster after removing ID A3" << endl;
        classRoster->printAll();
        cout << "\n";
    
    cout << "Trying to remove Student with ID A3, incoming error" << endl;
        classRoster->remove("A3");
    cout << endl;
    
    //F5 Deconstructor
    classRoster->~Roster();
    
    return 0;
}
