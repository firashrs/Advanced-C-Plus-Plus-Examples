#include "complex.h"

namespace firascomplex{


ostream &operator<<(ostream &out, const complex &c){
    out<<"number : "<<c.get_real()<<" + i"<<c.get_imaginary()<<endl;
    return out;
}
complex::complex():real(0), imaginary(0){}
complex::complex(double new_real, double new_imaginary):real(new_real), imaginary(new_imaginary){}
complex::~complex(){}

complex::complex(const complex &other){
    cout<<"copy constructor called"<<endl;
    real = other.real;
    imaginary = other.imaginary;
}


const complex& complex::operator=(const complex&other){
    cout<<"= operator in action"<<endl;
    real = other.real;
    imaginary = other.imaginary;

    return *this;

}
void complex::print(){
    cout<<"number : "<<real<<" + i"<<imaginary<<endl;
}
}
