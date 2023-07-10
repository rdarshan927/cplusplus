/*
Write a C++ Program display Student Marksheet using Multiple inheritance. 
*/

//incomplete

#include<iostream>

using namespace std;

class studentInput
{
    protected:
        string stuName;
        int stuYear, sem;
        float ip, cs, ics, mc, spm, oop, iwt, eng;
    
    public:
        void getData()
        {
            cout<<"Enter the name of the student : ";
            cin>>stuName;
            cout<<"Enter the year of the student : ";
            cin>>stuYear;
            cout<<"Enter the semester of the sudent : ";
            cin>>sem;

            if(stuYear == 1)
            {
                if (sem == 1)
                {
                    cout<<"Enter the marks of IP : ";
                    cin>>ip;
                    cout<<"Enter the marks of CS : ";
                    cin>>cs;
                    cout<<"Enter the marks of ICS : ";
                    cin>>ics;
                    cout<<"Enter the marks of MC : ";
                    cin>>mc;
                }
                else if(sem == 2)
                {
                    cout<<"Enter the marks of SPM : ";
                    cin>>spm;
                    cout<<"Enter the marks of OOP : ";
                    cin>>oop;
                    cout<<"Enter the marks of IWT : ";
                    cin>>iwt;
                    cout<<"Enter the marks of English for Academic Purpose : ";
                    cin>>eng;
                }
            }
            //it continues like this ...
        }
};

class studentOutput: public studentInput
{
    public:
        void display1()
        {
            cout<<"Student Name : "<<stuName<<endl;
            cout<<"Year, Semester : "<<stuYear<<", "<<sem<<endl;

            if(stuYear == 1)
            {
                if (sem == 1)
                {
                    cout<<"Marks of IP : "<<ip<<endl;
                    cout<<"Marks of CS : "<<cs<<endl;
                    cout<<"Marks of ICS : "<<ics<<endl;
                    cout<<"Marks of MC : "<<mc<<endl;
                }
                else if(sem == 2)
                {
                    cout<<"Marks of SPM : "<<spm<<endl;
                    cout<<"Marks of OOP : "<<oop<<endl;
                    cout<<"Marks of IWT : "<<iwt<<endl;
                    cout<<"Marks of English for Academic Purpose : "<<eng<<endl;
                }
            }
        }
};

class calculation: public studentInput
{
    public:
        void avg()
        {
            if (stuYear == 1)
            {
                if(sem == 1)
                {
                    cout<< (ip+cs+ics+mc)/4.0<<endl;
                }
                else if (sem == 2)
                {
                    cout<<(spm+oop+iwt+eng)/4.0<<endl;
                }
            }
            //it goes like this ...     
        }
};

class exited
{
    public:
        void exiting()
        {
            cout<<"Program existed."<<endl;
        }
};


int main()
{
    studentInput data;
    studentOutput outdata;
    calculation cal;
    exited end;

    int user, i;

    for(i=0; i<4; i++)
    {
        cout<<"1 - Input Details\n2 - Output Details\n3 - Calculate Average\n4 - Exit\nEnter the type : ";
        cin>>user;

        switch (user)
        {
        case 1:
            data.getData();
            break;
        case 2:
            outdata.display1();
            break;
        case 3:
            cal.avg();
            break;
        case 4:
            end.exiting();
            return 0;
            break;
        default:
            cout<<"You have entered an invalid type."<<endl;
            break;
        }
    }

    return 0;
}