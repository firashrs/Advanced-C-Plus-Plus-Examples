#include <iostream>

using namespace std;

void test(void (*pfunc)(int value)){
    pfunc(5);

}

double testadd(double (*fn)(int)){
    return fn(6);
}

int main()
{
    auto func = [](int value){cout<<"hello "<<value<<endl;};
    test(func);

    test([](int value){cout<<"hello "<<value<<endl;});

    auto addOne = [](int a) -> double {return a+1;};
    double res = testadd(addOne);

    cout<<res<<endl;
    double r = addOne(77);

    cout<<r<<endl;
    return 0;
}
