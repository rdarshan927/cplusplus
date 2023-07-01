#include<iostream>

using namespace std;

int main()
{
    int i, n, sum=0;

    cout<<"Enter the number to find sum : ";
    cin>>n;

    for(i=1; i<=n; i++)
    {
        sum += i;
    }

    cout<<"Sum of the numbers : "<<sum<<endl;

    return 0;
}