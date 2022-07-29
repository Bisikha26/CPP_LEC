#include<iostream>
using namespace std;

class Matrix {
    private:
        int a[3][3];
    public:
        void readMatrix();
        void displayMatrix();
        Matrix operator *(Matrix);
};

void Matrix ::  readMatrix() {
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cin>>a[i][j];
        }
    }
}

void Matrix :: displayMatrix() {
    for (int i=0; i<3; i++){
        cout<<"\n";
        for(int j=0; j<3; j++) {
            cout<<"\t"<<a[i][j];
        }
    }
}

Matrix Matrix :: operator* (Matrix m2) {
    Matrix temp;
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            temp.a[i][j] = 0;
            for(int k=0; k<3; k++) {
            temp.a[i][j] += a[i][k] * m2.a[k][j];

            }
        }
        return temp;
    }
}

int main() {
    Matrix m1, m2, m3;
    cout<<"Enter First Matrix";
    m1.readMatrix();
    cout<<"\nEnter Second Matrix";
    m2.readMatrix();
    m3 = m1 * m2;
    cout<<"\n Product of two matrices:";
    m3.displayMatrix();
    return 0;
}
