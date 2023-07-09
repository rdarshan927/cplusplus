/*
Create a class named Shape with a function that prints "This is a shape". Create another class named Polygon inheriting the Shape class 
with the same function that prints "Polygon is a shape". Create two other classes named Rectangle and Triangle having the same function which 
prints "Rectangle is a polygon" and "Triangle is a polygon" respectively. Again, make another class named Square having the same function which 
prints "Square is a rectangle".Now, try calling the function by the object of each of these classes.
*/

//I think the answer is correct according to the question.

#include<iostream>

using namespace std;

class Shape
{
    public:
        void Display1()
        {
            cout<<"This is a shape"<<endl;
        }
};

class Polygon: public Shape
{
    public:
        void Display2()
        {
            cout<<"Polygon is a shape"<<endl;
        }
};

class Rectangle: //public Polygon
{
    public:
        void Display3()
        {
            cout<<"Rectangle is a polygon"<<endl;
        }
};

class Triangle: //public Polygon
{
    public:
        void Display4()
        {
            cout<<"Triangle is polygon"<<endl;
        }
};

class Square: //public Rectangle
{
    public:
        void Display5()
        {
            cout<<"Square is a rectangle"<<endl;
        }
};

int main()
{
    Shape object1;
    Polygon object2;
    Rectangle object3;
    Triangle object4;
    Square object5;

    object1.Display1();
    object2.Display2();
    object3.Display3();
    object4.Display4();
    object5.Display5();
}