#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> ages;

    ages["Mike"] = 40;
    ages["Bob"] = 35;
    ages["Phil"] = 24;

    ages.insert(pair<string, int>("Firas", 999));
    ages.insert(make_pair("Hares", 888));

    for(map<string, int>::iterator it = ages.begin(); it != ages.end(); it++){
        cout<<it->first<<": "<<it->second<<endl;
        pair<string, int> p = *it;
        cout<<p.first<<": "<<p.second<<endl;

    }
    return 0;
}
