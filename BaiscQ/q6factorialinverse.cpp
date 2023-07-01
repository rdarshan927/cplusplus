#include<iostream>

using namespace std;

int main()
{
    int i, n, factor=1;

    cout<<"Enter the factorial to find the factors : ";
    cin>>n;

    cout<<"The factors of the numbers are : ";//<<1<<" ";
    for(i=1; i<=n; i++)
    {
        factor *= i;
        cout<<i<<" ";
        if(factor >= n)
            break;
    }
    cout<<endl;
    
    return 0;
}