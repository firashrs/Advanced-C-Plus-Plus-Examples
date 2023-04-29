#include <iostream>
#include <ring.h>
#include <nested_ring.h>
using namespace std;


//template<class T>


int main()
{
    nested_ring<int>::iterator it;
    it.print();

    //cout<<*it<<endl;

    /*ring<string> text_ring(3);

    text_ring.add("one");
    text_ring.add("two");
    text_ring.add("three");
    text_ring.add("four");

    for (int i = 0; i < text_ring.size(); i++){

        cout<<text_ring.get(i)<<endl;
    }*/

    return 0;
}
