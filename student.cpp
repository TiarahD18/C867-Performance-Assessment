//
//  student.cpp
//  C867 Performance Assessment
//
//  Created by Tiarah Durant on 9/28/22.
//


#include <cstring>
#include <iostream>

#include "degree.h"
#include "student.h"


Student::Student() {
    studentID = "";
    firstName = "";
    lastName = "";
    emailAddress = "";
    age = 0;
    daysInCourse1 = 0;
    daysInCourse2 = 0;
    daysInCourse3 = 0;
    degreeprogram = DegreeProgram::UNAVAILABLE;
}

Student::Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram) {
    
    studentID = studentID;
    firstName = firstName;
    lastName = lastName;
    emailAddress = emailAddress;
    age = age;
    daysInCourse1 = daysInCourse1;
    daysInCourse2 = daysInCourse2;
    daysInCourse3 = daysInCourse3;
    degreeprogram = degreeprogram;
};

string Student::getID()
    {
        return studentID;
    }


    string Student::getfirstName()
    {
        return firstName;
    }

    string Student::getlastName()
    {
        return lastName;
    }

    string Student::getemailAddress()
    {
        return emailAddress;
    }
    int Student::getAge()
    {
        return age;
    }

    int Student::getdaysInCourse1()
    {
        return daysInCourse1;
    }

    int Student::getdaysInCourse2()
    {
        return daysInCourse2;
    }

    int Student::getdaysInCourse3()
    {
        return daysInCourse3;
    }
    DegreeProgram Student::getdegreeProgram()
    {
        return degreeprogram;
    }

    
void Student::setID(string studentID) {
    studentID = studentID;
}

void Student::setfirstName(string firstName) {
    firstName = firstName;
}

void Student::setlastName(string lastName) {
    lastName = lastName;
}

void Student::setemailAddress(string emailAddress) {
    emailAddress = emailAddress;
}

void Student::setAge(int age) {
    age = age;
}

void Student::setdaysInCourse1(int daysInCourse1) {
    daysInCourse1 = daysInCourse1;
}

void Student::setdaysInCourse2(int daysInCourse2) {
    daysInCourse2 = daysInCourse2;
}

void Student::setdaysInCourse3(int daysInCourse3) {
    daysInCourse3 = daysInCourse3;
}

void Student::setdegreeProgram(DegreeProgram degreeprogram) {
    degreeprogram = degreeprogram;
}
    
void Student::Print()  {
    cout << getID() << getfirstName() << getlastName() << getemailAddress() << getAge() << getdaysInCourse1() << getdaysInCourse2() << getdaysInCourse3() << getdegreeProgram() << endl;
}
