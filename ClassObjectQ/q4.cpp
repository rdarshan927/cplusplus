/*
Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by creating a class named
'Triangle' with the constructor having the three sides as its parameters.
*/

#include<iostream>
#include<cmath>

using namespace std;

class Triangle
{
    private:
        int side1, side2, side3;
        float tot;
    
    public:
        Triangle(int x, int y, int z)
        {
            side1 = x;
            side2 = y;
            side3 = z;
            tot = (side1+side2+side3)/2.0;
        }
        void display()
        {
            cout<<"Area : "<<sqrt(tot * (tot-side1) * (tot-side2) * (tot-side3))<<endl;
            cout<<"Perimeter : "<<side1+side2+side3<<endl;
        }
};

int main()
{
    Triangle data(3, 4, 5);

    data.display();

    return 0;
}