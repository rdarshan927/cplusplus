/*
Write a program to print the volume of a box by creating a class named 'Volume' with an 
initialization list to initialize its length, breadth and height.
*/

#include<iostream>

using namespace std;

class Volume
{
    private:
        int length, breadth, height;
    
    public:
        void assign(int x, int y, int z)
        {
            length = x;
            breadth = y;
            height = z;
        }

        int calculation()
        {
            return length*breadth*height;
        }
};

int main()
{
    Volume data;

    data.assign(8, 4, 2);

    cout<<"Volume of the box : "<<data.calculation()<<endl;

    return 0;
}