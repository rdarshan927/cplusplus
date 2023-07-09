/*
We want to store the information of different vehicles. Create a class named Vehicle with two data member named mileage and price. Create its two subclasses
*Car with data members to store ownership cost, warranty (by years), seating capacity and fuel type (diesel or petrol).
*Bike with data members to store the number of cylinders, number of gears, cooling type(air, liquid or oil), wheel type(alloys or spokes) 
and fuel tank size(in inches)
Make another two subclasses Audi and Ford of Car, each having a data member to store the model type. Next, make two subclasses Bajaj and TVS, 
each having a data member to store the make-type.
Now, store and print the information of an Audi and a Ford car (i.e. model type, ownership cost, warranty, seating capacity, fuel type, mileage and price.) 
Do the same for a Bajaj and a TVS bike.
*/

#include<iostream>

using namespace std;

class Vehicle
{
    protected:
        float mileage=260, price=40000000;
};

class Car
{
    protected:
        float ownershipcost=30000;
        int warranty=5, seatingCapacity=60;
        string fuelType = "petrol";
};

class Bike
{
    protected:
        int cylinders=5, gears=4;
        string coolingType, wheelType;
        float fuelTankSize;
};

class Audi
{
    protected:
        string modelType;
};

class Ford
{
    protected:
        string modelType;
};

class Bajaj
{
    private:
        string makeType;
};

class TVS
{
    private:
        string makeType;
};

int main()
{


    return 0;
}