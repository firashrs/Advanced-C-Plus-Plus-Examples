#include <iostream>

using namespace std;

template <class T>
void print(T n){
    cout<<"template version: "<<n<<endl;
}

void print(int value){
    cout<<"non template version: "<<value<<endl;
}

int main()
{
    print<string>("Hello world");
    print<int>(1997);


    print("Hello world");
    print(1997);
    print<>(1997);

    return 0;
}
