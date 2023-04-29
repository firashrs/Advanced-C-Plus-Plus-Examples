#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
    int n = 5;
    cout<<typeid(n).name()<<endl;

    decltype(n) m = 16;
    cout<<m<<" Of type "<<typeid(n).name()<<endl;

    return 0;
}
