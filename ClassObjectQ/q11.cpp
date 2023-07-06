/*
Write a program that would print the information (name, year of joining, salary, address) of three employees by creating a class named 'Employee'. 
The output should be as follows:
Name        Year of joining        Address
Robert        1994        64C- WallsStreat
Sam        2000        68D- WallsStreat
John        1999        26B- WallsStreat
*/

#include<iostream>

using namespace std;

class Employee
{
    private:
        string name, address;
        int year;
        float salary;

    public:
        void assign(string x, int y, string z, float a)
        {
            name = x;
            year = y;
            address = z;
            salary = a;
        }
        void display()
        {
            cout<<"Name : "<<name<<endl;
            cout<<"Year : "<<year<<endl;
            cout<<"Address : "<<address<<endl;
            cout<<"Salary : "<<salary<<"\n"<<endl;
        }
};

int main()
{
    Employee data1;
    Employee data2;
    Employee data3;

    data1.assign("Robert", 1994, "64-WallsStreet", 20000.00);
    data2.assign("Sam", 2000, "68D-WallsStreet", 30000);
    data3.assign("John", 1999, "26B-WallsStreet", 10000);

    data1.display();
    data2.display();
    data3.display();

    return 0;
}