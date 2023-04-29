#include <iostream>
#include <complex.h>
using namespace std;
using namespace firascomplex;

int main()
{
    complex c(14, 3);
    complex c2 = c;
    c = c2;
    cout<<c<<endl;
    return 0;
}
