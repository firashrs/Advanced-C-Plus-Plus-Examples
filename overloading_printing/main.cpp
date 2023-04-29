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

    friend ostream &operator<<(ostream &out, const Horse &horse){
       out<<"Horse - Name: "<<horse.name<<". Age: "<<horse.age<<". Weight: "<<horse.weight<<endl;
        return out;
    }
};

int main()
{
    Horse h1("Goldie", 12, 450.3);
    Horse h2("Valkery", 12, 450.3);
    cout<<h1<<h2;
    return 0;
}
