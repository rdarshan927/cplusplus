#include<iostream>

using namespace std;

int main()
{
    int noOfDays;

    cout<<"Enter the number of days the member is late to return the book : ";
    cin>>noOfDays;

    if(noOfDays>=1 && noOfDays<=5)
        cout<<"Fine is Rs"<<noOfDays*0.50<<endl;
    else if(noOfDays>5 && noOfDays<=10)
        cout<<"Fine is Rs"<<noOfDays*1.0<<endl;
    else if(noOfDays>10 && noOfDays<=30)
        cout<<"Fine is Rs"<<noOfDays*5.0<<endl;
    else if(noOfDays>30)
        cout<<"Your membership have been cancelled."<<endl;
    else
        cout<<"You have entered an invalid number of days!"<<endl;
    return 0;
}