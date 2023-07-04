/*
Assign and print the roll number, phone number and mailaddress of two students having names "Sam" and "John" respectively by creating two objects of the class 'Student'.
*/
//I used paramerized constructor.
//remeber for storing 0 infront of a phone number in int is not possible so you can use string if you want ...

#include<iostream>

using namespace std;

class student
{
    private:
        string name, address;
        int rollno, phno;
    
    public:
        student(string x, string y, int a, int b)
        {
            name = x;
            address = y;
            rollno = a;
            phno = b;
        }

        void display()
        {
            cout<<"Name : "<<name<<endl;
            cout<<"Adress : "<<address<<endl;
            cout<<"Roll Number : "<<rollno<<endl;
            cout<<"Phone Number : " <<phno<<"\n"<<endl;
        }
};

int main()
{
    student data1("Sam", "Kandy", 3215, 762649);
    student data2("John", "Ampara", 2314, 76264);

    data1.display();
    data2.display();

    return 0;
}