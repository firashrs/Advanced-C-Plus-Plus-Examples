#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
using namespace std;

namespace complex_nms{
class Complex
{
    public:
        Complex();
        Complex(double real, double imaginary);
        Complex(const Complex &other);
        const Complex & operator=(const Complex &other);
        virtual ~Complex();

        bool operator==(const Complex&other) const;
        bool operator!=(const Complex&other) const;



        double Getreal() const{ return real; }
        double Getimaginary() const{ return imaginary; }



    protected:

    private:
        double real;
        double imaginary;
};
ostream &operator<<(ostream &out, const Complex& c);
Complex operator+(const Complex& a, const Complex&b);
Complex operator+(const Complex& a, double d);

}

#endif // COMPLEX_H
