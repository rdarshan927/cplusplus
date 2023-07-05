#include<iostream>

using namespace std;

int main()
{
    //There are 06 types of inheritance in c++.

    //1- Single Inheritance
                    //Accessing one class with other one class.
                    /*
                        one
                         |
                         |
                        two                            
                    */

    //2- Multiple Inheritance
                    //Accessing two classes with other one class.
                    /*
                        one         two
                           \        /
                               \/
                             third
                    */

    //3- Multilevel Inheritance
                    //Accessing a class which is accessing an other class with a other one class.
                    /*
                        one
                         |
                         |
                        two
                         |
                         |
                       three
                    */

    //4- Hybrid Inheritance
                    //Accessing a class which is accessing other one class and accessing other one class with other single class.
                    /*
                        one
                         |
                         |
                        two     three
                            \  /
                            four
                    */

    //5- Hirachical Inheritance
                    //Accessing a single class using several classes and even accessing the accessed classes using other classes.
                    /*
                                    one
                                   /   \
                                two     three
                               /   \    /    \
                            four  five six   seven
                    */
    
    //6- Virtual Inheritance
                    //Used to solve diamond problem which occurs during the handling of hirachical inheritance.
                    /*
                                 one
                               /    \
                              /      \
                            two     three
                              \       /
                               \     /
                                 four
                    */

    return 0;
}