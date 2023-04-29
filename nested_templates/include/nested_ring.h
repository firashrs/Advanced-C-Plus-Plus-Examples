#ifndef NESTED_RING_H
#define NESTED_RING_H

#include <iostream>
using namespace std;

template <class T>
//template <typename T>
class nested_ring
{
public:
    class iterator;
};

template <class T>
class nested_ring<T>::iterator{
public:
    void print(){
        cout<<"Hello from iterator! "<<T()<<endl;
    }
};
/*
void nested_ring::iterator::print(){
    cout<<"Hello from iterator!"<<endl;
}*/

#endif // NESTED_RING_H
