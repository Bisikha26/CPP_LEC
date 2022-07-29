//write a program to find the transpose of a 3 x 3 matrix using the concept of object oriented programming.
#include<iostream>
using namespace std;
class matrix
{
    private:
    int a[3][3],b[3][3];
    public:
    void setmatrix()
    {
        cout<<"enter the value of matrix"<<endl;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
               cin>>a[i][j];
            }
        }
    }
    void transpose()
    {

        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
               b[i][j]=a[j][i];
            }
        }
    }
    void display()
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
               cout<<a[i][j]<<"   ";
            }
            cout<<endl;
        }
        cout<<"transpose"<<endl;

      for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
               cout<<b[i][j]<<"   ";
            }
            cout<<endl;
        }
    }

};
int main()
{
    matrix m1;
    m1.setmatrix();
    m1.transpose();
    m1.display();
    return 0;
}