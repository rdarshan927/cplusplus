/*
Write a program by creating an 'Employee' class having the following functions and print the final salary.
1 - 'getInfo()' which takes the salary, number of hours of work per day of employee as parameters
2 - 'AddSal()' which adds $10 to the salary of the employee if it is less than $500.
3 - 'AddWork()' which adds $5 to the salary of the employee if the number of hours of work per day is more than 6 hours.
*/

#include<iostream>

using namespace std;

class Employee
{
    private:
        float salary;
        float hours;
    public:
        void getInfo(float x, float y)
        {
            salary = x;
            hours = y;
        }

        float AddSal()
        {
            if(salary<500.0)
                salary += 10.0;
            return salary;
        }

        float AddWork()
        {
            if(hours>6)
                salary += 5.0;
            return salary;
        }
};

int main()
{
    Employee data;

    data.getInfo(400.0, 8);
    data.AddSal();

    cout<<"Final Salary : $"<<data.AddWork()<<endl;

    return 0;
}