#include <iostream>

using namespace std;

class Parent{
    int dogs;
    string text;

public:
    Parent(){
        dogs = 5;
        cout<<"no parameters constructor Parent"<<endl;
    }

    Parent(string text){
        dogs = 5;
        this->text= text;
        cout<<"with parameters constructor Parent"<<endl;
    }
};

class Child : Parent{
public:
    Child():Parent("Unnamed Child!"){

    }
};


int main()
{
    Parent p;
    Child c;
    return 0;
}
