#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //ofstream outFile;


    fstream outFile;
    string outputFileName = "text.txt";

    //outFile.open(outputFileName);
    outFile.open(outputFileName, ios::out);


    if (outFile.is_open()){
        cout<<"file opened successfully!"<<endl;
        outFile << "Hello World !"<<endl;
        outFile << 1997 <<endl;
        outFile.close();
    }else{
        cout<<"Could not open file "<<outputFileName<<endl;
    }
    return 0;
}
