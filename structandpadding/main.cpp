#include <iostream>
#include <fstream>
using namespace std;

#pragma pack(push, 1)
struct Person{
    char name[50];
    int age;
    double weight;
};
#pragma pack(pop)

int main()
{


    string file_name = "test.bin";

    fstream outputFile, inputFile;
    Person someone = {"Firas", 185, 2123.5};
    outputFile.open(file_name, ios::binary|ios::out);
    if(outputFile.is_open()){
        outputFile.write(reinterpret_cast<char *>(&someone), sizeof(Person));
        outputFile.close();
    }else{
        cout<<"File could not be openend! "<<file_name<<endl;
    }

    Person someOneElse = {};
    inputFile.open(file_name, ios::binary|ios::in);
    if(inputFile.is_open()){
        inputFile.read(reinterpret_cast<char *>(&someOneElse), sizeof(Person));
        inputFile.close();
    }else{
        cout<<"File could not be openend! "<<file_name<<endl;
    }
    cout<<someOneElse.name<<", "<<someOneElse.age<<", "<<someOneElse.weight<<endl;

    return 0;
}
