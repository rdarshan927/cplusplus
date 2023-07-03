#include<iostream>
using namespace std;

//NOTE 01:

//constructor is used to explain whether the data exists ot not.
/*
1- Defualt Constructor - we assign a fixed value.
2- Parameterized Constructor - we pass the value as parameter when creating the object.
3- Copy Constructor - we pass the previously created object as a parameter in the newly created object.
*/

//NOTE 02:

//constructor overloading - If you call all the three constructors it will be a constructor overloading.
//It's because all the constructor name will be the same but it can be varied only using the parameters being passed out through it.

class person
{
    private:
        string name;
        int age;
        
    
    public:
        person()    //class name and the constructor name should be the same.     1- Default constructor
        {
            name = " ";
            age = 0;
            cout<<"Data doesn't exist"<<endl;
        }
        person(string x, int y)     //define the data type clearly.     2- Prameterized constructor
        {
            name = x;   //and so you need to assign the captured value to the variable.
            age = y;    // "
        }
        person(person &x)   //copying the data from previous class object .      3- copy constructor
        {
            name = x.name;
            age = x.age;
        }
        void display()
        {
            cout<<"Name : "<<name<<endl;
            cout<<"Age  : "<<age<<endl;
        }
};

int main()
{
    person data;    //whenever you call a class automatically the constructor will be called.     -   Default constructor

    person data1("Darshan", 21);     //whenever you create the object you will have to pass the values as a parameter.   -   Parameterized constructor

    person data2(data1);     //you will have to pass the previously created object name as a parameter into the newly created object.    -   copy constructor

    //data.display();       //it isn't necessary to call the default constructor's object name to the executing function.
    data1.display();    //you'll have to call the other both parameterized and copy constructor's object name to the executing function inorder to execute/ display.
    data2.display();

    return 0;
}