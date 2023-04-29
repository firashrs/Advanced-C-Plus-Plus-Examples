#include <iostream>

using namespace std;

int main()
{
    auto words = {"one", "two", "three", "four"};
    for (auto w : words){
        cout<<w<<endl;
    }
    return 0;
}
