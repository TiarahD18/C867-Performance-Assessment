//
//  roster.h
//  C867 Performance Assessment
//
//  Created by Tiarah Durant on 9/28/22.
//

#include "student.h"
#include "degree.h"
#include <cstring>
#pragma once
using namespace std;


class Roster {
public:
    int sizeofRoster;
    int population;
    Roster(); //constructor
    Roster(int population);
    Student** classRosterArray;
    void parse(string StudentData);
    void add(string studentID,
             string firstName,
             string lastName,
             string emailAddress,
             int age,
             int daysInCourse1,
             int daysInCourse2,
             int daysInCourse3,
             DegreeProgram degreeprogram);
    
    void remove(string studentID);
    void printAll();
    void printAverageDaysInCourse(string studentID);
    void printInvalidEmails();
    void printByDegreeProgram(DegreeProgram degreeprogram);
    
    ~Roster(); //deconstructor
    
};
