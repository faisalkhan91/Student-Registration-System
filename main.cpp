#include <iostream>
#include "Student.h"

using namespace std;

#define MAX_STUDENT 100 // Max number of students supported

int menuSelection(void);

int main()
{
    int select, i;
    int sid;
    string option ;
    int count = 0;
    Student stud[MAX_STUDENT];

    do{
        select = menuSelection();
        switch(select)
        {
            case 1:
                for(int i=0; i<MAX_STUDENT; ++i)
                    {
                        //Function call to register a Student
                        stud[i].registerStudent();
                        //Tracks the count of the students entered
                        count++;

                        //Condition to provide user with a choice to enter another user
                        cout<<"Do you want to Enter another Student? [Y/N]";
                        getline(cin>>ws, option);

                        if (option == "Y" || option == "y" || option == "Yes")
                        {
                            continue;
                        }
                        else if (option == "N" || option == "n" || option == "No"){
                            break;
                        }
                    }
            break;
            case 2:
                //Displays the number of registered students
                cout<<count<<" registered student(s) found!\n\n";
                for(int i=0; i<count; ++i)
                {
                    //Function call to print all the registered students
                    stud[i].printStudent(count);
                }
            break;
            case 3:
                cout << "Please input the id that needs to be searched:";
                cin >> sid;
                for(int i=0; i<count; ++i)
                    {
                        //Function call to search a student by id
                        stud[i].searchStudent(sid);
                    }
            break;
            case 4:
                cout<<"Good Bye!!!"<<endl;
            break;
            default:
                cout<<"ERROR: invalid selection try again!!!"<<endl;
        }

    }while(select !=4);

    return 0;
}

int menuSelection(void)
{
    int select;

    cout<<"\t\tStudent System" << endl;
    cout<<"1. Register a new student" << endl;
    cout<<"2. Print student list" << endl;
    cout<<"3. Find student by ID" << endl;
    cout<<"4. Quit" << endl;
    cout<<"Select:";
    cin>>select;
    return select;
}
