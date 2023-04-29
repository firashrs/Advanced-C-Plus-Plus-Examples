#include <iostream>

using namespace std;

void test(int a, int b){
    cout<<"hello from test! "<<a<<" - "<<b<<endl;
}

int main()
{
    test(5,4 );

    void (*p_test)(int, int);
    p_test = test;

    p_test(3, 2);

    void (*p_tes2t)(int, int) = test;
    p_tes2t(11, 11);

    return 0;
}
