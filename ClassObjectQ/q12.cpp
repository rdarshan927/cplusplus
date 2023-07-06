/*
Add two distances in inch-feet by creating a class named 'AddDistance'.
*/

#include<iostream>

using namespace std;

class AddDistance
{
    private:
        float distance1, distance2;

    public:
        void distance(float x, float y)
        {
            distance1 = x;
            distance2 = y;
        }

        float calculation()
        {
            return distance1+distance2;
        }
};

int main()
{
    AddDistance data;

    data.distance(25.2, 36.7);

    cout<<"Total distance : "<<data.calculation()<<endl;

    return 0;
}