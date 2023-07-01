#include<stdio.h>

int main()
{
    //input functions ..........................................................................................................................................
    //string setence;
    //cin>>sentence;    01 method of string input
    //string sentence("Hello World !");     another method of string declaration
    //sentence.push_back('d');      adding a new letter to the end of the sentence/ word
    //sentence.pop_back();      removing the last letter in the word/ sentence
    //fflush(stdin);        we can use this pto kill any any garbage values in the variables when getting the input for character or string
// ..........................................................................................................................................

//capacity functions ..........................................................................................................................................
    //cout<<sentence.size();        01 method to find the total length of the word/ sentence of a string
    //cout<<sentence.length();      02 method to find the total length of the word/ setence of a string
    //cout<<sentence.max_size();    to find the maximum lenth/ size the variable can hold the input
// ..........................................................................................................................................

//iterator functions ..........................................................................................................................................
    //so we can loop it easily using for loop to print it one by one
    //string::iterator letter       //to declare the iterator
    //for(letter=sentence.begin(); letter!=sentence.end(); letter++)
        //cout<<*letter<<endl;
    
    //so we can do the same to reverse printing with minor change like this
    //string::reverse_iterator rletter;     //to declare the iterator
    //for(rletter=sentence.rbegin(); rletter!=sentence.rend(); rletter++)
        //cout<<*rletter<<endl;
// ..........................................................................................................................................

//Manipulating functions ..........................................................................................................................................
    //we can swap the stored word/ sentence in two variables between them
    //string x = "Hello";
    //string y = "World";
    //x.swap(y);
// ..........................................................................................................................................

    return 0;
}