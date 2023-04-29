#include <iostream>
#include <Complex.h>

using namespace complex_nms;
using namespace std;

int main()
{
    Complex c1(4, 15);
    cout<<c1<<endl;
    Complex c2= c1;
    cout<<c2<<endl;
    Complex c3 ;
    c3 = c2;
    cout<<c3<<endl;
    Complex c4;
    c4 = c1 + c3;
    cout<<c4<<endl;

    cout<< c4 + 1 <<endl;

    cout<<"Equals? "<< (c1==c4) <<endl;
    cout<<"Not equals? "<< (c1!=c4) <<endl;
    return 0;
}
