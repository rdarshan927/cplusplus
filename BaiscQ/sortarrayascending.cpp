#include<iostream>

using namespace std;

int main()
{
    int stored[999];
    int i, temp, j, limit;

    cout<<"Enter total count of numbers to be stored : ";
    cin>>limit;

    for(i=0; i<limit; i++)
    {
        cout<<"Enter the number "<<i+1<<": ";
        cin>>stored[i];
    }

    for(i=0; i<limit; i++)
    {
        for(j=i; j<limit; j++)
        {   
            temp = stored[i];
            if(stored[i]>stored[j])
            {
                stored[i] = stored[j];
                stored[j] = temp;
                //cout<<stored[i]<<" ";
            }
        }
    }

    for(i=0; i<limit; i++)
    {
        cout<<stored[i]<<" ";
    }

    return 0;
}
