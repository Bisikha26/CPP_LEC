#include <iostream>
using namespace std;

class complex {
    private:
        float real, imag;
    public:
        complex(float re = 0, float im = 0) {
            real = re;
            imag = im;
        }

    bool operator >(complex cc) {
        float mag1, mag2;
        mag1 = real * real + imag * imag;
    }
}