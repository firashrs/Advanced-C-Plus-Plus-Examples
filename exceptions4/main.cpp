#include <iostream>
#include <exception>
using namespace std;

void goesWrong(){
    bool error1Detect = true;
    bool error2Detect = false;

    if(error1Detect){
        throw bad_alloc();
    }
    if(error2Detect){
        throw exception();

    }

}

int main()
{
    try{
        goesWrong();
    }
    catch(exception &e){
        cout<<"CAUGHT EXCEPTION: "<<e.what()<<endl;
    }
    catch(bad_alloc &e){
        cout<<"CAUGHT BAD ALLOC: "<<e.what()<<endl;
    }
    cout << "Hello world!" << endl;
    return 0;
}
