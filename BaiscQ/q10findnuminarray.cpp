#include<iostream>

using namespace std;

int main()
{
    int stored[999];
    int num, i, limit;

    cout<<"How many numbers do you want to input : ";
    cin>>limit;

    for(i=0; i<limit; i++)
    {
        cout<<"Enter the number "<<i+1<<": ";
        cin>>stored[i];
    }

    cout<<"Enter the number to find : ";
    cin>>num;

    for(i=0; i<limit; i++)
    {
        if(stored[i] == num)
        {
            cout<<"Number exist."<<endl;
            return -1;
        }
    }
    cout<<"Number doesn't exist."<<endl;

    return 0;
}