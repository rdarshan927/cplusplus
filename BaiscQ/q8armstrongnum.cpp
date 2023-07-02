#include<iostream>

using namespace std;

int main()
{
    int num, temp, i, sum=0, num2;

    cout<<"Enter 03 digit number : ";
    cin>>num;

    temp = num;
    if(num>99 && num<1000)
    {
        for(i=0; i<3; i++)
        {
            num2 = num%10;
            sum = sum + (num2*num2*num2);
            num = num/10 ;
            //cout<<num2<<endl;
            //cout<<num<<endl;
            //cout<<sum<<endl;
        }

        //cout<<sum<<endl;
        if(temp == sum)
            cout<<"It's an armstrong number"<<endl;
        else
            cout<<"It's not an armstrong number"<<endl;
    }
    else
    {
        cout<<"You have entered an invalid number !"<<endl;
    }

    return 0;
}