/*
Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by creating a class named 'Triangle' 
with a function to print the area and perimeter.
*/

#include<iostream>
#include<cmath>

using namespace std;

class Triangle
{
    private:
        int side1 = 3, side2 = 4, side3 = 5;
        float sides=0, areaa=0;

    public:
        float area()
        {
            sides = (side1+side2+side3)/2;
            areaa = (sides* (sides-side1) * (sides-side2) * (sides-side3));
            return sqrt(areaa);
        }

        int perimeter()
        {
            return side1+side2+side3;
        }
};

int main()
{
    Triangle data;
    
    data.area();
    data.perimeter();

    cout<<"Area : "<<data.area()<<endl;
    cout<<"Perimeter : "<<data.perimeter()<<endl;

    return 0;
}