#include <iostream>

using namespace std;

int main()
{
    int one = 1;
    int two = 2;
    int three = 3;

    //[](){cout<<"hello"<<endl;}(); // creeate it and call it

    //capture one and two by value
    [one, two](){cout<<one<<" , "<<two<<endl;}();

    //capture all variables by value
    [=](){cout<<one<<" , "<<two<<endl;}();


    //capture all variables by value but capture three by reference
    [=, &three](){three = 7;cout<<one<<" , "<<two<<endl;}();
    cout<<three<<endl;


    //capture all variables by reference
    [&](){cout<<one<<" , "<<two<<endl;}();

    return 0;
}
