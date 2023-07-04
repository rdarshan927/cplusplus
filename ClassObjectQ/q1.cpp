/*
Create a class named 'Student' with a string variable 'name' and an integer variable 'roll_no'. Assign the value of roll_no as '2' and that of name as "John" by 
creating an object of the class Student
*/

#include<iostream>

using namespace std;

class student
{
    public:
        string name;
        int roll_no;

        void display()
        {
            cout<<"Name : "<<name<<endl;
            cout<<"Roll Number : "<<roll_no<<endl;
        }
};

int main()
{
    student data;

    data.name = "John";
    data.roll_no = 2145;

    data.display();
    

    return 0;
}