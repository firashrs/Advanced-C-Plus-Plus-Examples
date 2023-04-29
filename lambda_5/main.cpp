#include <iostream>

using namespace std;

int main()
{
    int cat = 5;
    [cat]() mutable { //can change the var inside the lambda but it wont affect the real value
        cat = 7;
        cout<<cat<<endl;
    }();
    cout<<cat<<endl;


    return 0;
}
