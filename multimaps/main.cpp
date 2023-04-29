#include <iostream>
#include <map>
using namespace std;

int main()
{
    multimap<int, string> lookup;

    lookup.insert(make_pair(25, "firas"));
    lookup.insert(make_pair(30, "Hmza"));
    lookup.insert(make_pair(25, "Jhon"));
    lookup.insert(make_pair(30, "Mike"));
    lookup.insert(make_pair(30, "Mike"));


    for (multimap<int, string>::iterator it = lookup.begin(); it != lookup.end(); it++){
        cout<<it->first<<" : "<<it->second<<endl;
        cout<<endl;
    }

    cout<<endl;

    for (multimap<int, string>::iterator it = lookup.find(25); it != lookup.end(); it++){

        cout<<it->first<<" : "<<it->second<<endl;
    }

    cout<<endl;

    pair<multimap<int, string>::iterator, multimap<int, string>::iterator> range = lookup.equal_range(25);

    for (multimap<int, string>::iterator it = range.first; it != range.second; it++){

        cout<<it->first<<" : "<<it->second<<endl;
    }



    cout<<endl;

    auto rangee = lookup.equal_range(25);

    for (multimap<int, string>::iterator it = rangee.first; it != rangee.second; it++){

        cout<<it->first<<" : "<<it->second<<endl;
    }



    return 0;
}
