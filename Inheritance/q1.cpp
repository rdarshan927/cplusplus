/*
Create two classes named Mammals and MarineAnimals. Create another class named BlueWhale which inherits both the above classes. 
Now, create a function in each of these classes which prints "I am mammal", "I am a marine animal" and "I belong to both the categories: 
Mammals as well as Marine Animals" respectively. Now, create an object for each of the above class and try calling
1 - function of Mammals by the object of Mammal
2 - function of MarineAnimal by the object of MarineAnimal
3 - function of BlueWhale by the object of BlueWhale
4 - function of each of its parent by the object of BlueWhale
*/

#include<iostream>

using namespace std;

class Mammals
{
    public:
        void displayMammals()
        {
            cout<<"I'm mammal"<<endl;
        }
};

class MarineAnimals
{
    public:
        void displayMarine()
        {
            cout<<"I'm a marine animal"<<endl;
        }
};

class BlueWhale: public Mammals, public MarineAnimals
{
    public:
        void displayBlueWhale()
        {
            cout<<"I belong to both of the categories, Mammals as well as Marine Animals"<<endl;
        }
   
};

int main()
{
    Mammals Mammal;
    Mammal.displayMammals();

    MarineAnimals MarineAnimal;
    MarineAnimal.displayMarine();

    BlueWhale oBlueWhale;
    oBlueWhale.displayBlueWhale();
    oBlueWhale.displayMammals();
    oBlueWhale.displayMarine();

    return 0;
}