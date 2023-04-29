#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> numbers;

    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(5);
    numbers.push_front(0);

    list<int>::iterator it = numbers.begin();
    numbers.insert(++it, 1);


    for(list<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
        cout<<*it<<endl;

    cout<<" ------- "<<endl;
    numbers.erase(--it);

    for(list<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
        cout<<*it<<endl;

    return 0;
}
