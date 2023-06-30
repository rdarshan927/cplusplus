#include<iostream>

using namespace std;

int main()
{
    float basicSalary, grossSalary, hRA, dA;

    cout<<"Enter the basic salary of the employee : ";
    cin>>basicSalary;

    if(basicSalary<1500)
    {
        hRA = basicSalary * (10.0/100.0);
        dA = basicSalary * (90.0/100.0);
    }
    else
    {
        hRA = 500.0;
        dA = basicSalary * (98.0/100.0);
    }
    grossSalary = basicSalary + hRA + dA;

    cout<<"Gross salary of the employee : "<<grossSalary<<endl;

    return 0;
}