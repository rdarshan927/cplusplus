#include<iostream>
using namespace std;

//destruction function is used to destroy the values stored in the particular variables using constructor after the execution completed.
//this is not necessary to be included in the program.

class addition
{
    private:
        int a, b;

    public:
        addition()
        {
            a=10;
            b=15;
        }
        ~addition()     // This is the way to create a destruction function
        {   
            a=0;
            b=0;
            cout<<"The data has been cleared."<<endl;
        }

        void plus()
        {
            cout<<"Addition : "<<a+b<<endl;
        }
};

int main()
{
    addition answer;

    answer.plus();

    return 0;
}