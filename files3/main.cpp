#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream input;
    string file_name = "population.txt";

    input.open(file_name, ios::in);


    if(!input.is_open()){
        cout<<"Could not open file "<<file_name<<endl;
        return -1;
    }
    cout<< "file opened successfully!"<<endl;
    while(input){
        string line;
        getline(input, line, ':');

        string population;
        input >> population;

        input >> ws;

        if (!input) break;

        cout << "'"<< line<< "'"<< " -- "<<"_"<<population<<"_" <<endl;

    }
    input.close();

    return 0;
}
