#include<iostream>

using namespace std;

int main()
{
    float hardness, carbon, tensile;

    cout<<"Enter the hardness of the steel : ";
    cin>>hardness;
    cout<<"Enter the carbon content of the steel : ";
    cin>>carbon;
    cout<<"Enter the tensile strength of the steel : ";
    cin>>tensile;

    if(hardness>50 && carbon<0.7 && tensile>5600)
        cout<<"Grade is 10"<<endl;
    else if(hardness>50 && carbon<0.7)
        cout<<"Grade is 9"<<endl;
    else if(carbon<0.7 && tensile>5600)
        cout<<"Grade is 8"<<endl;
    else if(hardness>50 && tensile>5600)
        cout<<"Grade is 7"<<endl;
    else if(tensile>5600 || hardness>50 || carbon<0.7)
        cout<<"Grade is 6"<<endl;
    else
        cout<<"Grade is 5"<<endl;

    return 0;
}