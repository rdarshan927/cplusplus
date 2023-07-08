/*
We want to calculate the total marks of each student of a class in Physics,Chemistry and Mathematics and the average marks of the class. 
The number of students in the class are entered by the user. Create a class named Marks with data members for roll number, name and marks. 
Create three other classes inheriting the Marks class, namely Physics, Chemistry and Mathematics, 
which are used to define marks in individual subject of each student. Roll number of each student will be generated automatically.
*/

//notcompleted yet

#include<iostream>

using namespace std;

class Marks
{
    protected:
        int *rollNumber;
        string **name;
        float *stuPhysics;
        float *stuChem;
        float *stuMaths;
        int totStudents, i, j, k;
    
    public:
        void getData()
        {
            cout<<"Enter the number of students in Physics :";
            cin>>totStudents;

            rollNumber = new int*[totStudents];
            stuPhysics = new int*[totStudents];
            stuChem = new int*[totStudents];
            stuMaths = new int*[totStudents];
            name = new int*[totStudents];
            for(k=0; k<totStudents; k++)
            {
                name[totStudents] = int[20];
            }
            
            for(i=0; i<totStudents; i++)
            {
                rollNumber[i] = i+1;
                cout<<"Enter the name of the student :";
                cin>>name[i];
                cout<<"Enter the marks of Physics : ";
                cin>>stuPhysics[i];
                cout<<"Enter the marks of Chemistry : ";
                cin>>stuChem[i];
                cout<<"Enter the marks of Mathematics : ";
                cin>>stuMaths[i];
            }
            
        }
        void Display()
        {
            for(i=0; i<totStudents; i++)
            {
                cout<<"Roll Number : "<<rollNumber[i]<<endl;
                cout<<"Name : "<<name[i]<<endl;
                cout<<"Physics Marks : "<<stuPhysics[i]<<endl;
                cout<<"Chemistry Marks : "<<stuChem[i]<<endl;
                cout<<"Mathematics Marks : "<<stuMaths[i]<<endl;
            }
        }

        ~Marks()
        {
            delete[] rollNumber;
            delete[] stuPhysics;
            delete[] stuChem;
            delete[] stuMaths;
            for(i=0; i<totStudents; i++)
            {
                delete[] name
            }
        }
};

class Physics: public Marks
{
    public:
      //  void getData2()
    //    {
    
       // }
};

class Chemistry: public Marks
{
    public:
};

class Mathematics: public Marks
{
    public:
};

int main()
{
    Marks maino;
    //Physics data1;
    maino.getData();
    maino.Display();

    return 0;
}