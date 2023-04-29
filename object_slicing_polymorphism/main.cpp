#include <iostream>

using namespace std;

class Vehicule{
private:
    string model;
    int nbr_wheels;
public:
    Vehicule():model(""), nbr_wheels(0){
        cout<<"Vehicule initializer."<<endl;}
    Vehicule(string model, int nbr_wheels):model(model), nbr_wheels(nbr_wheels){
        cout<<"Vehicule initializer."<<endl;}
    Vehicule(const Vehicule &other){
        cout<<"Vehicule Copy constructor called"<<endl;
        model = other.model;
        nbr_wheels = other.nbr_wheels;
    }
    virtual void print(){
        cout<<"this is a vehicule object. model="<<model<<". nbr of wheels="<<nbr_wheels<<endl;
    }
};

class Car: public Vehicule{
private:
    int horse_power;
public:
    Car():horse_power(0){
        cout<<"Car initializer."<<endl;
    }
    Car(const Car &other){
        cout<<"Car Copy constructor called"<<endl;
        horse_power = other.horse_power;
    }

    void print(){
        cout<<"this is a Car object. model=. nbr of wheels = 4"<<endl;
    }
};


int main()
{
    //Needs virtual for the reference to function as expected
    Car c1;
    Vehicule &v1 = c1;
    v1.print();
    cout<<"-----"<<endl;

    Car c2;
    Car v2 = c2;
    v2.print();
    return 0;
}
