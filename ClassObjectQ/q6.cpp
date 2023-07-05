/*
Write a program to print the area of a rectangle by creating a class named 'Area' having two functions. First function 
named as 'setDim' takes the length and breadth of the rectangle as parameters and the second function named as 'getArea' returns the area of the rectangle. 
Length and breadth of the rectangle are entered through keyboard.
*/

#include<iostream>

using namespace std;

class Area
{
    private:
        int length;
        int breadth;
    
    public:
        void setDim(int x, int y)
        {
            length = x;
            breadth = y;
        }
        int getArea()
        {
            return length * breadth;
        }
};

int main()
{
    Area data;

    data.setDim(4, 5);

    cout<<"Area : "<<data.getArea()<<endl;

    return 0;
}