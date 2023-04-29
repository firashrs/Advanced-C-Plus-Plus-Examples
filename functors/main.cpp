#include <iostream>

using namespace std;

struct Test{

    virtual bool operator()(string &text) = 0;
};

struct MatchTest : public Test{

    bool operator()(string &text){
        return text == "lion";
    }

};


void check(string text, Test &test){
    if(test(text)){

        cout<<"Text Matches!"<<endl;
    }else{

        cout<<"Text Doesn't Match!"<<endl;
    }
}

int main()
{
    MatchTest pred;

    string value = "lion";
    check(value, pred);

    return 0;
}
