#include <iostream>

using namespace std;

class Horse{
private:
    string name;
    int age;
    double weight;

public:
    Horse():name(""), age(-1), weight(-1){}
    Horse(string new_name, int new_age, double new_weight):name(new_name), age(new_age), weight(new_weight){}
    Horse(const Horse& other){
        cout<<"Copy constructor called"<<endl;
        name = other.name;
        age = other.age;
        weight = other.weight;
    }

    void set_age(int new_age){
        age = new_age;
    }
    void print() const{
        cout<<"Horse - Name: "<<name<<". Age: "<<age<<". Weight: "<<weight<<endl;
    }

    bool operator<(const Horse&other) const{
        return age < other.age;
    }

    const Horse &operator=(const Horse &other){
        cout<<"operator = method called"<<endl;
        name = other.name;
        age = other.age;
        weight = other.weight;

        return *this;
    }

};


int main()
{
    Horse h1("Goldie", 12, 450.3);

    Horse h2("Vinegar", 6, 300.0);

    h2 = h1;
    h2.set_age(99);

    Horse h3;
    h3 = h2 = h1;
    Horse h4 = h3;
    //h3.operator=(h2);

    h1.print();
    h2.print();
    h3.print();

    return 0;
}
