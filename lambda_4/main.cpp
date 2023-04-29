#include <iostream>

using namespace std;

class Car{
private:
    int year{2000};
    int horse_power{5};
public:
    void run(){
        cout<<"before runnning: year="<<year<<", HP="<<horse_power<<endl;
        cout<<"VROMM VROOM"<<endl;
        int running{155};
        auto plambda =[this](){

            this->year++;
            this->horse_power--;
        };
        plambda();
        cout<<"after runnning"<<running<<": year="<<year<<", HP="<<horse_power<<endl;
    }
};

int main()
{
    Car my_car;
    my_car.run();


    return 0;
}
