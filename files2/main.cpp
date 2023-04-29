#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream inFile;
    string inputFileName = "text.txt";
    inFile.open(inputFileName, ios::in);

    if (inFile.is_open()){
        cout << "File in open !" <<endl;

        string line;
        while(inFile){
            getline(inFile, line);

            cout<<line<<endl;
        }

        inFile.close();

    }else{
        cout << "File could not be openened !" <<endl;
    }

    cout << "Hello world!" << endl;
    return 0;
}
