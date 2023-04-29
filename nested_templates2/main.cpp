#include <iostream>
#include <ring.h>
using namespace std;

int main()
{
    ring<string> text_ring(3);

    text_ring.add("one");
    text_ring.add("two");
    text_ring.add("three");
    text_ring.add("four");

    for (int i = 0; i < text_ring.size(); i++){

        cout<<text_ring.get(i)<<endl;
    }

    ring<string>::iterator it = text_ring.begin();

    cout<<"--------"<<endl;
    //cout<<*it<<endl;
    for (string val : text_ring){
        cout<<val<<endl;
    }



    return 0;
}
