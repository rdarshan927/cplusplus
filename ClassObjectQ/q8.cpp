/*
Print the average of three numbers entered by the user by creating a class named 'Average' 
having a function to calculate and print the average without creating any object of the Average class.
*/

#include<iostream>

using namespace std;

class Average
{
    private:
        static int num1, num2, num3;
    
    public:
        static void gettingdata()
        {
            cout<<"Enter the number 01: ";
            cin >> num1;
            cout<<"Enter the number 02: ";
            cin >> num2;
            cout<<"Enter the number 03: ";
            cin >> num3;
        }

        static float calculation()
        {
            return (num1+num2+num3)/3.0;
        }
};
int Average::num1=0;
int Average::num2=0;
int Average::num3=0;

int main()
{
    Average::gettingdata();
    cout<<"Average : "<<Average::calculation()<<endl;

    return 0;
}