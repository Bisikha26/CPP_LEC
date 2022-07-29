#include<iostream>
using namespace std;
class fib{
    private:
        int n;
    public:
    int a=0,b=1,temp,c;
    fib(){
        a=0;
        b=1;
        cout<<a<<" "<<b;
        cout<<"\t";
        temp=0;
    }
    
        void operator ++(int){
            temp =a+b;
            a=b;
            b=temp;
            cout<<temp<<"\t";
        }
};
int main(){
    int n,i;
    cout<<"no of terms";
    cin>>n;
    fib f;
    for (int i=2; i<n; i++){
       f ++;
    }

}