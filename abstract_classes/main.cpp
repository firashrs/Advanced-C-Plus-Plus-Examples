#include <iostream>

using namespace std;

class Animal{
public:
    virtual void speak()=0;
    virtual void run(){
        cout << "random animal running"<<endl;
    }

};

class Dog: public Animal{
public:
    virtual void speak(){
        cout << "Woof !" <<endl;
    }
    void run(){
        cout<<"RUN RUN"<<endl;
    }
};

void test(Animal &a){
    a.run();
}

int main()
{
    Dog dog;
    Animal &a = dog;
    a.speak();
    test(a);
    return 0;
}
