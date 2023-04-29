#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    map<string, vector<int> > scores;

    scores["Mike"].push_back(20);
    scores["Mike"].push_back(15);
    scores["Vicky"].push_back(3);
    scores["Vicky"].push_back(7);
    scores["Vicky"].push_back(12);
    scores["Vicky"].push_back(6);

    for (auto it = scores.begin(); it != scores.end(); it++){
        cout<<it->first<<": "<<endl;

        for (int i = 0; i < it->second.size(); i++){
            cout<<"    "<<it->second[i]<<endl;
        }

        cout<<endl;
    }

    return 0;
}
