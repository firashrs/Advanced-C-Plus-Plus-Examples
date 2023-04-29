#include <iostream>

using namespace std;

template<class T, class K>
class Test{
private:
    T obj;
public :
    Test(T obj){
        this->obj = obj;
    }

    void print(){
        cout<<obj<<endl;
    }
};


int main()
{
    Test<string, int> t1("Firas");
    t1.print();
    return 0;
}
