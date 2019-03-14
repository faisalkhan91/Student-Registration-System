#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

#include <string>

using namespace std;

class Student{
// Private Variables
private:
    int id;
    string name;
    float gpa;

// Public Variables
public:
    //Class Functions
    Student(int id, string name, float gpa);
    Student(){};
    int registerStudent();
    int printStudent(int pcount);
    int searchStudent(int psid);
    //Accessor Setters
    void setId(int id);
    void setName(string name){this->name=name;};
    void setGpa(float gpa){this->gpa=gpa;};
    //Accessor Getters
    int getId(){return id;};
    string getName(){return name;};
    float getGpa(){return gpa;};
};

#endif // STUDENT_H_INCLUDED
