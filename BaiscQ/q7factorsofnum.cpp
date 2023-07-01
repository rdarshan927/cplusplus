#include<iostream>

using namespace std;

int main()
{
    int i, n, factors;

    cout<<"Enter the number to find the factors : ";
    cin>>n;

    cout<<"Factors of the number : ";
    for(i=1; i<=n; i++)
    {
        if(n%i == 0)
            cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}