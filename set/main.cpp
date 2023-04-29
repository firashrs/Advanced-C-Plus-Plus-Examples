#include <iostream>
#include <set>
using namespace std;

class car{
private:
    string model;
    int horse_power;
public:
    car():model(""), horse_power(0){}
    car(string new_model, int new_horse_power):model(new_model), horse_power(new_horse_power){}
    void print_car() const{
        cout<<"Car : "<<model<<" | Horse Power : "<<horse_power<<endl;
    }
    bool operator<(const car & other_car) const{
        return horse_power<other_car.horse_power;
    }
};


int main()
{

    set<int> numbers;

    for(int i = 1; i < 100; i++){
        if(i % 2 == 0){
            numbers.insert(i);
        }
    }

    for( auto it = numbers.begin(); it != numbers.end(); it++){
        cout<<*it<<endl;
    }

    cout<<endl;
    set<car> cars;
    cars.insert(car("Tesla", 29));
    cars.insert(car("BMW", 11));
    cars.insert(car("Marcedes", 51));
    cars.insert(car("Marcedes", 58));


    for( auto it = cars.begin(); it != cars.end(); it++){
        it->print_car();
    }

    cout<<endl;
    auto it = cars.find(car("BMMW", 11));
    it->print_car();


    return 0;
}
