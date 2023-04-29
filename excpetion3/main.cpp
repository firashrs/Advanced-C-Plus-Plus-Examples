#include <iostream>
#include <exception>

using namespace std;


class myException: public exception{
public:
    virtual const char* what() const throw(){
        return "somthing bad happpened man";
    }
};

class test {
public:
    void goesWrong() throw(bad_alloc){
        throw myException();
    }
};

int main()
{
    test test;
    try{
        test.goesWrong();
    }catch(exception &e){
        cout<<"error message : "<<e.what()<<endl;
    }
    cout << "Hello world!" << endl;
    return 0;
}
