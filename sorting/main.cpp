#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class car{
private:
    string model;
    int horse_power;
public:
    void set_horse_power(int new_val){
        horse_power = new_val;
    }
    car():model(""), horse_power(0){}
    car(string new_model, int new_horse_power):model(new_model), horse_power(new_horse_power){}
    void print_car() const{
        cout<<"Car : "<<model<<" | Horse Power : "<<horse_power<<endl;
    }
    bool operator<(const car & other_car) const{
        return horse_power<other_car.horse_power;
    }

    friend bool comp(const car &a, const car &b);

};
void print_all_cars(const vector<car> &cars){
    cout<<endl;

    for (int i = 0; i < cars.size(); i++){
        cars[i].print_car();
    }

}

bool comp(const car &a, const car &b){
    return a.horse_power<b.horse_power;
}

int main()
{
    vector<car> cars;

    cars.push_back(car("Tesla", 29));
    cars.push_back(car("BMW", 11));
    cars.push_back(car("Marcedes", 51));

    print_all_cars(cars);

    //sort(cars.begin(), cars.end());
    sort(cars.begin(), cars.end(), comp);



    print_all_cars(cars);

    return 0;
}
