#include<iostream>

using namespace std;

class student
{
    private:
        float mark1, mark2, mark3, mark4;
        string name;
        int age;
    
    public:
        void gettinginput()
        {
            cout<<"Enter the name : ";
            cin>>name;
            cout<<"Enter the age : ";
            cin>>age;
            cout<<"Enter the marks 1 : ";
            cin>>mark1;
            cout<<"Enter the marks 2 : ";
            cin>>mark2;
            cout<<"Enter the marks 3 : ";
            cin>>mark3;
            cout<<"Enter the marks 4 : ";
            cin>>mark4;
        }
        float total()
        {
            return mark1+mark2+mark3+mark4;
        }
        float avg()
        {
            return total()/4.0;
        }
        /*void display()
        {
            cout<<name<<endl;
            cout<<age<<endl;
            cout<<avg()<<endl;
            cout<<total()<<endl;
        }*/
        void display2();    //defining just like this.
};

void student::display2()    //scope resolution operator - for using a class function out side of the class. (but we need to defin it in the class)
{
    cout<<name<<endl;
    cout<<age<<endl;
    cout<<avg()<<endl;
    cout<<total()<<endl;
}

int main()
{
    student data;

    data.gettinginput();
    data.total();
    data.avg();
    //data.display();
    data.display2();

    return 0;
}