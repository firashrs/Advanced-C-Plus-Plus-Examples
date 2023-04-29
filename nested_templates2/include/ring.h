#ifndef RING_H
#define RING_H



#include <iostream>
using namespace std;

template <class T>
class ring
{
private:
    T *m_values;
    int m_size;
    int m_pos;
public:
    class iterator;

public:
    ring(int n):m_pos(0),m_size(n), m_values(NULL){
        m_values = new T[n];
    }
    ~ring(){
        delete []m_values;
    }
    int size(){return m_size;}

    iterator begin(){
        return iterator(0, *this);
    }
    iterator end(){
        return iterator(m_size, *this);
    }

    void add(T item){
        m_pos %= m_size;
        m_values[m_pos++] = item;
    }
    T &get(int pos){
        return m_values[pos%m_size];
    }
};

template <class T>
class ring<T>::iterator{
private:
    int m_pos;
    ring &m_ring;

public:
    iterator(int pos, ring&r):m_pos(pos),m_ring(r) {
    }

    T &operator*(){
        return m_ring.get(m_pos);
    }

    iterator &operator++(){
        m_pos++;

        return *this;
    }

    bool operator!=(const iterator &other) const{
        return m_pos != other.m_pos;
    }

    void print(){
        cout<<"Hello from iterator! "<<T()<<endl;
    }
};

#endif // RING_H
