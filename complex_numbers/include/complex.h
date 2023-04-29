#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
using namespace std;

namespace firascomplex{

class complex
{
    public:
        complex();
        complex(double real, double imaginary);
        complex(const complex &other);
        const complex& operator=(const complex&other);
        //bool operator<(const complex&other);
        virtual ~complex();

        double get_real() const {return real;};
        double get_imaginary() const {return imaginary;};

        void print();

    protected:

    private:
        double real;
        double imaginary;
};
ostream &operator<<(ostream &out, const complex &c);


}
#endif // COMPLEX_H
