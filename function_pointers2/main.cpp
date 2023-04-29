#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool match(string test){
    return test.size() == 3;
}

int my_count(auto a, auto b, bool(*func)(string)){
    int counter = 0;
    for(auto it = a; it != b; it++){
        if (func(*it))
            counter++;
    }
    return counter;
}

int main()
{
    vector<string> texts;
    texts.push_back("one");
    texts.push_back("two");
    texts.push_back("three");
    texts.push_back("four");
    texts.push_back("five");
    texts.push_back("six");
    texts.push_back("seven");

    cout<<my_count(texts.begin(), texts.end(), match);


    return 0;
}
