/*
Create a class called 'Matrix' containing constructor that initializes the number of rows and the number of columns of a new Matrix object. The Matrix class has the following information:
1 - number of rows of matrix
2 - number of columns of matrix
3 - elements of matrix (You can use 2D vector)
The Matrix class has functions for each of the following:
1 - get the number of rows
2 - get the number of columns
3 - set the elements of the matrix at a given position (i,j)
4 - adding two matrices.
5 - multiplying the two matrices
You can assume that the dimensions are correct for the multiplication and addition.
*/

//multiplication pending

#include<iostream>

using namespace std;

class Matrix
{
    private:
        int i, j, k, l;
        int **matrix;
        int **addmatrix;
        int **mMatrix;

    public:
        void getData()
        {
            cout<<"Enter the number of rows : ";
            cin>>i;
            cout<<"Enter the number of coloumns : ";
            cin>>j;

            matrix = new int*[i];
            for(k=0; k<i; k++)
            {
                matrix[k] = new int[j];
            }
        }

        void getElements()
        {
            for(k=0; k<i; k++)
            {
                cout<<"Row "<<k+1<<" : "<<endl;
                for(l=0; l<j; l++)
                {
                    cout<<"Enter number for coloumn "<<l+1<<": ";
                    cin>>matrix[k][l];
                }
            }
        }

        void addition()
        {
            addmatrix = new int*[i];
            for(k=0; k<i; k++)
            {
                addmatrix[k] = new int[j];
            }

            for(k=0; k<i; k++)
            {
                for(l=0; l<j; l++)
                {
                    addmatrix[k][l] = matrix[k][l] + matrix[k][l];
                }
            }
        }

        /*void multiplication()
        {
            mMatrix = new int*[i]
        }*/

        void display()
        {
            cout<<"Normal Matrix"<<endl;
            for(k=0; k<i; k++)
            {
                cout<<"Row "<<k+1<<" : "<<endl;
                for(l=0; l<j; l++)
                {
                    cout<<"coloumn "<<l+1<<": "<<matrix[k][l]<<endl;
                }
                cout<<"\n";
            }
        }

        void displayadd()
        {
            cout<<"Added Matrix"<<endl;
            for(k=0; k<i; k++)
            {
                cout<<"Row "<<k+1<<" : "<<endl;
                for(l=0; l<j; l++)
                {
                    cout<<"coloumn "<<l+1<<": "<<addmatrix[k][l]<<endl;
                }
                cout<<"\n";
            }
        }
        

        ~Matrix()
        {
            for(k=0; k<i; k++)
            {
                delete[] matrix[k];
                delete[] addmatrix[k];
            }
            delete[] matrix;
            delete[] addmatrix;

        }
};

int main()
{
    Matrix data;
    data.getData();
    data.getElements();
    data.addition();
    data.display();
    data.displayadd();

    return 0;
}