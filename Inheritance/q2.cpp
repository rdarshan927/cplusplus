/*
Make a class named Fruit with a data member to calculate the number of fruits in a basket. 
Create two other class named Apples and Mangoes to calculate the number of apples and mangoes in the basket. 
Print the number of fruits of each type and the total number of fruits in the basket.
*/

#include<iostream>

using namespace std;

class Fruit
{
    protected:
        int totApples=5;
        int totMangoes=10;
        int totFruits;
    public:
        void getData()
        {
            totFruits = totApples+totMangoes;
            cout<<"Total Fruits : "<<totFruits<<endl;
        }
};

class Apples: public Fruit
{
    public:
        void getData1()
        {
            cout<<"Apples : "<<totApples<<endl;
        }
};

class Mangoes: public Fruit
{
    public:
        void getData2()
        {
            cout<<"Magoes : "<<totMangoes<<endl;
        }
};

int main()
{
    Apples data1;
    Mangoes data2;
    Fruit data3;

    data3.getData();
    data1.getData1();
    data2.getData2();


    return 0;
}