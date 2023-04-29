#include <iostream>

using namespace std;

class canGoWrong{
public:
    canGoWrong(){
        char*pmem = new char[999999999999999999];
        delete [] pmem;
    }
};

int main()
{
    try{
         canGoWrong c;
    }catch(exception &e){
        cout << "exception === " << e.what()<<endl;
    }
    cout<<"still running..."<<endl;

    return 0;
}
