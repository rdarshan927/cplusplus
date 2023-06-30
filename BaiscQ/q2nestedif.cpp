#include<iostream>

using namespace std;

int main()
{
    int age;
    char gender;

    cout<<"Enter the age : ";
    cin>>age;
    if(age>=18)
    {
        cout<<"Enter the gender(M/ F) : ";
        cin>>gender;
        cout<<"You are eligible,"<<endl;
        if(gender == 'M')
            cout<<"Room 5"<<endl;
        else if(gender == 'F')
            cout<<"Room 6"<<endl;
        else
            cout<<"You have entered an invalid gender type!"<<endl;
    }
    else
    {
        cout<<"You aren't eligible !"<<endl;
    }

    return 0;
}