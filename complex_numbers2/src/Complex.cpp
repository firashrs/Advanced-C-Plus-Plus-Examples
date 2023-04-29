#include "Complex.h"

namespace complex_nms{



Complex::Complex():real(0), imaginary(0){}
Complex::Complex(double real, double imaginary):real(real), imaginary(imaginary){}
Complex::Complex(const Complex &other):real(other.real), imaginary(other.imaginary){
    cout<<"Copy constructor in action."<<endl;
}
const Complex & Complex::operator=(const Complex &other){
    cout<<"operator = in action."<<endl;
    real = other.real;
    imaginary = other.imaginary;

    return *this;
}

bool Complex::operator==(const Complex&other) const{
    if (real != other.real)
        return false;
    if (imaginary != other.imaginary)
        return false;

    return true;
}

bool Complex::operator!=(const Complex&other) const{
    return ! (*this==other);
}

Complex::~Complex()
{
    //dtor
}
ostream &operator<<(ostream &out, const Complex& c){
    out << "Complex number: "<<c.Getreal()<<" + i "<<c.Getimaginary()<<endl;

    return out;
}
Complex operator+(const Complex& a, double d){
    double real_sum = a.Getreal() + d;
    double imaginary_sum = a.Getimaginary() ;

    return Complex(real_sum, imaginary_sum);
}

Complex operator+(const Complex& a, const Complex&b){
    double real_sum = a.Getreal() + b.Getreal();
    double imaginary_sum = a.Getimaginary() + b.Getimaginary();

    return Complex(real_sum, imaginary_sum);
}



}
