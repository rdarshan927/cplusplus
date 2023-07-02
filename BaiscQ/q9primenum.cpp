#include<iostream>

using namespace std;

int main()
{
    int num, i, count=0;

    cout<<"Enter the number : ";
    cin>>num;

    for(i=1; i<=num; i++)
    {
        if(num%i == 0)
            count += 1;
    }

    if(count == 2)
        cout<<"It's a prime number."<<endl;
    else
        cout<<"It's not a prime number."<<endl;

    return 0;
}