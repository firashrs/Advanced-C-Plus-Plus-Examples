#include <iostream>

using namespace std;

class Person{
private:
    int id{4}; //equivalent to int id = 4;
    string name{"Mike"};

public:
    Person() = default;
    Person(int new_id):id(new_id){}
    Person(const Person &other) = default;
    void print(){
        cout<<id<<" : "<<name<<endl;
    }
};

int main()
{
    Person p(77);
    p.print();

    Person p2(p);
    p.print();
    return 0;
}
