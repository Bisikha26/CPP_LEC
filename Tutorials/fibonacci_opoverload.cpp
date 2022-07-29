//PROGRAM in C++ to PRINT FIBONACCI SERIES USING INCREMENT OPERATOR OVERLOADING
#include<iostream>
using namespace std;
class Fibonacci
{
    private:
        int fi,fj,ff;

    public:
        Fibonacci(){    
            fi=-1;
            fj=1;
            ff=fi+fj;
        }

        void show(){
            cout<<ff<<" ";
        }

        void operator ++(){
            fi=fj;
            fj=ff;
            ff=fi+fj;
        }
};

int main()
{
    int n,i;
    Fibonacci f1;
    cout<<"Please Enter the limit of the series: ";
    cin>>n;
    for(i=0;i<n;i++){
        f1.show();
        ++f1;
    }
    return 0;
}