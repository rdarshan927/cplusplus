/*
Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively by creating a class named 'Rectangle' with a function named 
'Area' which returns the area. Length and breadth are passed as parameters to its constructor.
*/

#include<iostream>

using namespace std;

class Rectangle
{
    private:
        int length, breadth;
    
    public:
        Rectangle(int x, int y)
        {
            length = x;
            breadth = y;
        }

        int area()
        {
            return length * breadth;
        }
};

int main()
{
    Rectangle data1(4, 5);
    Rectangle data2(5, 8);

    cout<<"Area of the triangle 01 : "<<data1.area()<<endl;
    cout<<"Area of the triangle 02 : "<<data2.area()<<endl;

    return 0;
}