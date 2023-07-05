#include<iostream>

//ENUM - Used to create user defined constant values.

using namespace std;
//defining  //enum name     //contant value
enum color {black, white, gray};        //you can define like a data type and you can use it's values.

int main()
{
    color selected=black;   //created an object named "selected" for color.     //if assign a value which is not declared in the enum that gives an error.

    switch (selected)   //for example you can set the created object as a constant in switch case.
    {             
    case gray:
        cout<<"The selected color is Gray."<<endl;
        break;
    case black:
        cout<<"The selected color is Black."<<endl;
        break;
    case white:
        cout<<"The selected color is white."<<endl;
        break;
    default:
        cout<<"You have entered an invalid color."<<endl;
        break;
    }

    return 0;
}