#include <iostream>

using namespace std;

class Test{
public:
    Test(initializer_list<int> numbers){
        for (auto i : numbers){
            cout<<i<<endl;

        }
    }

    void print(initializer_list<string> words){
        for (auto s : words){
            cout<<s<<endl;

        }

    }
};

int main()
{
    Test t{1, 4, 7, 8, 11};
    t.print({"one", "two", "three", "four"});

    return 0;
}
