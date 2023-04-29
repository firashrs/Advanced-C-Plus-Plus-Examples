#include <iostream>
#include <map>
using namespace std;

class Person{
private:
    string name;
    int age;
public:
    Person(): name(""), age(0){}
    Person(const Person &other){
        cout<<"Copy constructor called"<<endl;
        name = other.name;
        age = other.age;
    }
    Person(string new_name, int new_age): name(new_name), age(new_age){
        cout<<"Person Created: "<<new_name<<" : "<<age<<endl;
    }
    void  print ()const{
        cout<<"Person printing: "<<name<<" : "<<age<<endl;

    }
    bool operator<(const Person &other) const{
        return age < other.age;
    }
};

int main()
{
    map<Person, int> people;

    people[Person("Stephen", 36)] = 36 ;
    people[Person("Mike", 12)] = 49;
    people[Person("Mike", 12)] = 479;
    people[Person("firas", 99)] = 1;

    people.insert(make_pair( Person("stouti", 60), 66));

    cout<<endl;

    for (map<Person, int>::iterator it = people.begin(); it != people.end(); it++){
        cout<<it->second<<endl;
        it->first.print();
        cout<<endl;
    }

    return 0;
}
