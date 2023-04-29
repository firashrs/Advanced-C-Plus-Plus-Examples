#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int> > grid(3, vector<int>(4, 0));

    grid[2].push_back(1);
    for(vector<vector<int> >::iterator it = grid.begin(); it != grid.end(); it++){
        for(vector<int>::iterator itt = (*it).begin(); itt != (*it).end(); itt++){
            cout<<*itt<<" - ";
        }
        cout<<endl;
    }

    return 0;
}
