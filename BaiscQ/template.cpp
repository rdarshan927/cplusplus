#include<iostream>

using namespace std;

template <class T>      //defining data type

void swapping (T& x, T& y);     //in here template will detect the data type automatically

int main()
{
    char letter1='A', letter2='B';
    int number1 = 2, number2 = 4;

    swapping(letter1, letter2);
    swapping(number1, number2);
    cout<<letter1<<" "<<letter2<<endl;
    cout<<number1<<" "<<number2<<endl;

    return 0;
}

template <class T>
void swapping (T& x, T& y)      
{
    T temp;     //we can use template inside the particular function too.

    temp = x;
    x = y;
    y = temp;
}