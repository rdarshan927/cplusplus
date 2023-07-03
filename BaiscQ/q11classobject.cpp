#include<iostream>

using namespace std;

class circle
{
    /*
    Access Specifier
    1. Public - if you declare variables or functions inside this, you can access it from main function directly using object.
    2. Private - only can access inside the class.
    3. Protected - Inceritance.
    */
    private:
        float radius;
    public:
        float area()
        {
            cout<<"Enter the radius : ";
            cin>>radius;
            return 3.14 * (radius*radius);
        }
        float circumference()
        {
            return 2 * 3.14 * radius;
        }
};

int main()
{
    circle cir; //calling object inside the main function

    cout<<cir.area()<<endl;

    return 0;
}