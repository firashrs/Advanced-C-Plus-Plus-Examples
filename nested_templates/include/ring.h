#ifndef RING_H
#define RING_H
#include <iostream>
using namespace std;
template <class T>
class ring
{
private:
    int n;
    int i = 0;
    T *arr;
public:
    ring(int n):n(n){
        arr = new T[n];
    }

    int size(){return n;}
    void add(T item){
        i %= n;
        arr[i++] = item;
    }
    T get(int pos){return arr[pos%n];}
};

#endif // RING_H
