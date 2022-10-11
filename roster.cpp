//
//  roster.cpp
//  C867 Performance Assessment
//
//  Created by Tiarah Durant on 9/28/22.
//



#include <cstring>
#include <iostream>
#include <array>
#include "degree.h"
#include "student.h"
#include "roster.h"
using namespace std;

int sizeofRoster;
int population;
int daysInCourse1;
int daysInCourse2;
int daysInCourse3;
Student** classRosterArray;

Roster::Roster() {
    population = 5;
    sizeofRoster = 0;
    classRosterArray = nullptr;
}

Roster::Roster(int population) {
    this->population = population;
    this->sizeofRoster = 0;
    this->classRosterArray = new Student*[population];
}

    
    
/*    const string studentData[5] =
    
    {"A1,John,Smith,John1989@gmail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99@yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", "A5,Tiarah,Durant,tiarahdurant@gmail.com,21,14,28,16,SOFTWARE"}; */

//Section E: data is parsed from the studentData table
void Roster::parse(string studentData) {
    size_t rhs = studentData.find(",");
    string studentID = studentData.substr(0, rhs);
    
    size_t lhs = rhs + 1;
    rhs = studentData.find(",", lhs);
    string firstName = studentData.substr(lhs, rhs - lhs);
    
    lhs = rhs + 1;
    rhs = studentData.find(",", lhs);
    string lastName = studentData.substr(lhs, rhs - lhs);
    
    lhs = rhs + 1;
    rhs = studentData.find(",", lhs);
    string emailAddress = studentData.substr(lhs, rhs - lhs);
    
    lhs = rhs + 1;
    rhs = studentData.find(",", lhs);
    int age = stoi(studentData.substr(lhs, rhs - lhs));
    
    lhs = rhs + 1;
    rhs = studentData.find(",", lhs);
    int daysInCourse1 = stoi(studentData.substr(lhs, rhs - lhs));
    
    lhs = rhs + 1;
    rhs = studentData.find(",", lhs);
    int daysInCourse2 = stoi(studentData.substr(lhs, rhs - lhs));
    
    lhs = rhs + 1;
    rhs = studentData.find(",", lhs);
    int daysInCourse3 = stoi(studentData.substr(lhs, rhs - lhs));
    
    DegreeProgram degreeprogram = DegreeProgram::SECURITY;
    if (degreeprogram == SECURITY) {
        degreeprogram = DegreeProgram::SECURITY;
    }
    
    else if (degreeprogram == SOFTWARE) {
        degreeprogram = DegreeProgram::SOFTWARE;
    }
    
    else if (degreeprogram == NETWORK) {
        degreeprogram = DegreeProgram::NETWORK;
    }
   
    add(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeprogram);
}
    
    
    
    void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram) {
        
 
    };
    
    //Remove is defined
    void Roster::remove(string studentID) {
        bool found = false;
            for (int i = 0; i < sizeofRoster; i++) {
                if (classRosterArray[i]->getID() == studentID) {
                    found = true;
                    delete classRosterArray[i];
                    classRosterArray[i] = classRosterArray[sizeofRoster - 1];
                    sizeofRoster--;
                }
            }
            if (found == false) {
                cout << "Not found\n";
            }
        }
    
//printAll() defined
    void Roster::printAll() {
        for (int i = 0; i < sizeofRoster; i++) {
                classRosterArray[i]->Print();
            }
        }
 
//printAverageDaysInCourse defined
void Roster::printAverageDaysInCourse(string studentID)
{
    bool found = false;
    for (int i = 0; i < sizeofRoster; i++) {
        if (classRosterArray[i]->getID() == studentID) {
            found = true;
            cout << "Student ID: " << studentID << " Avg Days: " << (daysInCourse1 + daysInCourse2 + daysInCourse3) / 3.0 << "\n";
        }
    }
    if (found == false) {
        cout << "Student not found\n";
    }
}
    
//printInvalidEmails() defined
void Roster::printInvalidEmails()
{
    cout << "Invalid Emails:\n";
    for (int i = 0; i < sizeofRoster; i++) {
        string validEmail = classRosterArray[i]->getemailAddress();
        if ((validEmail.find("@") == string::npos) || validEmail.find(".") == string::npos || validEmail.find(' ') != string::npos) {
            cout << validEmail << " is invalid\n";
        }
    }
}

//printByDegreeProgram defined
void Roster::printByDegreeProgram(DegreeProgram degreeprogram)
{
    cout << "Showing students in selected degree program:\n";
    for (int i = 0; i < sizeofRoster; i++) {
        if (classRosterArray[i]->getdegreeProgram() == degreeprogram) {
            classRosterArray[i]->Print();
        }
    }
}

//Deconstructor defined
    Roster::~Roster() {
        for (int i = 0; i < population; i++) {
                delete classRosterArray[i];
            }
    };

