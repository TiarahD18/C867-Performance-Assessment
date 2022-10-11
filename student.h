//
//  student.h
//  C867 Performance Assessment
//
//  Created by Tiarah Durant on 9/28/22.
//

//Defining class student
#include "degree.h"
#include <cstring>
#include <iostream>
using namespace std;
#pragma once

class Student {
private:
    string studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    int daysInCourse1;
    int daysInCourse2;
    int daysInCourse3;
    DegreeProgram degreeprogram;
    
public:
    
    Student();
    Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram);
    string getID();                               //Accessor
    string getfirstName();                        //Accessor
    string getlastName();                         //Accessor
    string getemailAddress();                     //Accessor
    int getAge();                                 //Accessor
    int getdaysInCourse1();                       //Accessor
    int getdaysInCourse2();                       //Accessor
    int getdaysInCourse3();                       //Accessor
    DegreeProgram getdegreeProgram();             //Accessor

    void setID (string studentID);                  //Mutator
    void setfirstName (string firstName);           //Mutator
    void setlastName (string lastName);             //Mutator
    void setemailAddress (string emailAddress);     //Mutator
    void setAge (int age);                          //Mutator
    void setdaysInCourse1 (int daysInCourse1);      //Mutator
    void setdaysInCourse2 (int daysInCourse2);      //Mutator
    void setdaysInCourse3 (int daysInCourse3);      //Mutator
    void setdegreeProgram (DegreeProgram degreeprogram);       //Mutator
    void Print();

};

