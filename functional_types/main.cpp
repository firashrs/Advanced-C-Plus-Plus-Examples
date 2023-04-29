#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
using namespace std;

bool if_count(const string &word){
    return word.size() == 3;
}

class check{
public:
    bool operator()(const string &test){
        return test.size() == 3;
    }
} chiken;

void run(function<bool(string&)> cch){
    string test = "dog";
    cout<<cch(test)<<endl;
}

int main()
{
    vector<string> v {"one", "two","three"};
    int size_word = 3;
    cout<<count_if(v.begin(), v.end(), [size_word](string test){return test.size()==size_word;}) <<endl;


    cout<<count_if(v.begin(), v.end(), if_count) <<endl;

    cout<<count_if(v.begin(), v.end(), chiken) <<endl;

    cout<<"Calling RUN NOW"<<endl;
    run(chiken);
    run([size_word](string test){return test.size()==size_word;});
    run(if_count);

    function <int(int, int)> addd = [](int a, int b){return a+b;};
    cout<<addd(4, 5)<<endl;



    return 0;
}
