/*
We want to calculate the total marks of each student of a class in Physics,Chemistry and Mathematics and the average marks of the class. 
The number of students in the class are entered by the user. Create a class named Marks with data members for roll number, name and marks. 
Create three other classes inheriting the Marks class, namely Physics, Chemistry and Mathematics, 
which are used to define marks in individual subject of each student. Roll number of each student will be generated automatically.
*/

//notcompleted yet - I couldn't find the exact mistake yet

#include<iostream>

using namespace std;

class Marks
{
    protected:
        int *rollNumber;
        string *name;
        float *stuPhysics;
        float *stuChem;
        float *stuMaths;
        float *totalMarks;
        float *avg;
        int totStudents, i, j, k;
    
    public:
        void getData()
        {
            cout<<"Enter the total number of students :";
            cin>>totStudents;

            rollNumber = new int[totStudents];
            stuPhysics = new float[totStudents];
            stuChem = new float[totStudents];
            stuMaths = new float[totStudents];
            totalMarks = new float[totStudents];
            avg = new float[totStudents];
            name = new string[totStudents];
            
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
                totalMarks[i] = stuPhysics[i] + stuChem[i] + stuMaths[i];
                avg[i] = totalMarks[i]/3.0;
            }
            
        }

        void Display()
        {
            for(i=0; i<totStudents; i++)
            {
                cout<<"\n\nRoll Number : "<<rollNumber[i]<<endl;
                cout<<"Name : "<<name[i]<<endl;
                cout<<"Physics Marks : "<<stuPhysics[i]<<endl;
                cout<<"Chemistry Marks : "<<stuChem[i]<<endl;
                cout<<"Mathematics Marks : "<<stuMaths[i]<<endl;
                cout<<"Total Marks : "<<totalMarks[i]<<endl;
                cout<<"Average Marks : "<<avg[i]<<endl;
            }
        }
        

        ~Marks()
        {
            delete[] rollNumber;
            delete[] stuPhysics;
            delete[] stuChem;
            delete[] stuMaths;
            delete[] totalMarks;
            delete[] avg;
            delete[] name;
        }
};

class Physics: public Marks
{
    public:
        void Display1()
        {
            for(i=0; i<totStudents; i++)
            {
                cout<<"\n\nRoll Number : "<<rollNumber[i]<<endl;
                cout<<"Name : "<<name[i]<<endl;
                cout<<"Physics Marks : "<<stuPhysics[i]<<endl;
            }
        }
};

class Chemistry: public Marks
{
    public:
        void Display2()
        {
            for(i=0; i<totStudents; i++)
            {
                cout<<"\n\nRoll Number : "<<rollNumber[i]<<endl;
                cout<<"Name : "<<name[i]<<endl;
                cout<<"Chemistry Marks : "<<stuChem[i]<<endl;
            }
        }
};

class Mathematics: public Marks
{
    public:
        void Display3()
        {
            for(i=0; i<totStudents; i++)
            {
                cout<<"\n\nRoll Number : "<<rollNumber[i]<<endl;
                cout<<"Name : "<<name[i]<<endl;
                cout<<"Mathematics Marks : "<<stuMaths[i]<<endl;
            }
        }
};

int main()
{
    int view;
    Marks maino;
    Physics stuP;
    Chemistry stuC;
    Mathematics stuM;

    maino.getData();

    cout<<"\n\n1 - All\n2 - Physics\n3 - Chemistry\n4 - Mathematics\nWhat's the marks do you want to view(1/ 2/ 3/ 4) : ";
    cin>>view;

    if(view == 1)
        maino.Display();
    else if(view == 2)
        stuP.Display1();
    else if(view == 3)
        stuC.Display2();
    else if(view == 4)
        stuM.Display3();
    else
        cout<<"You have entered an invalid request."<<endl;

    return 0;
}