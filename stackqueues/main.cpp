#include <iostream>
#include <stack>
#include <queue>
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
};

int main()
{
    stack<car> cars_stack;

    cars_stack.push(car("Tesla", 29));
    cars_stack.push(car("BMW", 11));
    cars_stack.push(car("Marcedes", 51));



    while(cars_stack.size()){
        cars_stack.top().print_car();
        cars_stack.pop();
    }

    cout<<endl;
    cars_stack.push(car("Tesla", 29));
    cars_stack.push(car("BMW", 11));
    cars_stack.push(car("Marcedes", 51));

    car &tmp = cars_stack.top();
    tmp.set_horse_power(69);

    while(cars_stack.size()){
        cars_stack.top().print_car();
        cars_stack.pop();
    }

    cout<<"Queue Now !!!"<<endl;

    queue<car> cars_queue;
    cars_queue.push(car("Tesla", 29));
    cars_queue.push(car("BMW", 11));
    cars_queue.push(car("Marcedes", 51));

    while(cars_queue.size()){
        cars_queue.front().print_car();
        cars_queue.pop();
    }

    return 0;
}
