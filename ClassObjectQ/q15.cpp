#include<iostream>
using namespace std;

class Solution {
    protected:
        int *store;
        int i, numOfA, target;
    public:
        void twoSum()
        {
            cout<<"Enter the target number : ";
            cin>>target;
            cout<<"Enter the number of array element : ";
            cin>>numOfA;

            store = new int[numOfA];

            for(i=0; i<numOfA; i++)
            {
                cout<<"Enter the element "<<i+1<<" : ";
                cin>>store[i];
            }

            for(i=0; i<numOfA; i++)
            {
                if(store[i]+store[i+1] == target)
                    cout<<"["<<i<<","<<i+1<<"]"<<endl;
            }
        }
};

int main()
{
    Solution o;

    o.twoSum();

    return 0;
}