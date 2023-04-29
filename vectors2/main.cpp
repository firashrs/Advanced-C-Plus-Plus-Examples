#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<double> numbers(20);

    cout<<"size: "<<numbers.size()<<endl;

    int capacity = numbers.capacity();
    cout<<"capacity: "<<capacity<<endl;

    for (int i =0 ; i < 10000; i++){
        if(numbers.capacity() != capacity){
            capacity = numbers.capacity();
            cout<<"Capacity: "<<capacity<<endl;
        }

        numbers.push_back(i);
    }

    numbers.clear();
    cout<<"size: "<<numbers.size()<<endl;
    cout<<"capacity: "<< numbers.capacity()<<endl;

    return 0;
}
