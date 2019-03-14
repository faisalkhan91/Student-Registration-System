#include <iostream>
#include "Student.h"

#define MAX_STUDENT 100

//Constructor for student
Student::Student(int id, string name, float gpa)
{
    this->id=id;
    this->name=name;
    this->gpa=gpa;
}

//Function to store values of the object student
int Student::registerStudent()
{
    string option;
    cout << "Enter the student ID: ";
    cin >> id;
    cout << "Enter the student NAME: ";
    getline(cin >> ws, name);
    cout << "Enter the student GPA: ";
    cin >> gpa;

    return 0;
}

//Function to print all the registered students
int Student::printStudent(int pcount)
{
    cout<<pcount<<") ";
    cout << id << ", " << name << ", "<< gpa << endl;

    return 0;
}

//Function to search all the registered students
int Student::searchStudent(int psid)
{
    if (psid==id)
    {
        cout << "Student Details:\n\n";
        cout << id << ", " << name << ", "<< gpa << endl;
    }

    return 0;
}
