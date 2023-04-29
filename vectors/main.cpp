#include <iostream>
#include <vector>


using namespace std;

int main()
{
    vector<string> strings;

    strings.push_back("onee");
    strings.push_back("twoo");
    strings.push_back("three");


    cout << strings.size() <<endl;

    for (int i =0; i <strings.size(); i++){
        cout<<strings[i]<<endl;
    }
    vector<string>::iterator it = strings.begin();
    while(it != strings.end())
        cout<<*it++<<endl;

    for(vector<string>::iterator it = strings.begin(); it != strings.end(); it++)
        cout<<*it<<endl;

    return 0;
}
