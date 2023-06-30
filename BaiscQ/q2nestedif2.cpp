#include<iostream>

using namespace std;

int main()
{
    char married, gender;
    int age;

    cout<<"Are you married(Y/ N) : ";
    cin>>married;

    if(married == 'Y' || married == 'y')
    {
        cout<<"Eligible for insurance."<<endl;
    }
    else if(married == 'N' || married == 'n')
    {
        cout<<"Enter the gender(M/F) : ";
        cin>>gender;
        cout<<"Enter the age : ";
        cin>>age;
        if(gender == 'M' || gender =='m' && age>30)
            cout<<"Eligible for insurance."<<endl;
        else if(gender == 'F' || gender == 'f' && age>25)
            cout<<"Eligible for insurance."<<endl;
        else if(gender != 'M' || gender != 'F' || gender != 'm' || gender != 'f')
            cout<<"You have entered an invalid gender type."<<endl;
        else
            cout<<"You aren't eligible for the insurance"<<endl;  
    }
    else
    {
        cout<<"You have entered an invalid response."<<endl;
    }

    return 0;
}