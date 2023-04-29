#include <iostream>

using namespace std;

void mightGoWrong(){
    bool error1 = false;
    bool error2 = true;
    if(error1){
        throw "Something is wrong BOSS";
    }
    if(error2){
        throw string("something stringy went wrong");
    }
}

void usesMightGoWrong(){
    mightGoWrong();
}

int main()
{
    try{
        usesMightGoWrong();
    }catch(int  e){
        cout << "Error code: "<<e<<endl;
    }
    catch(char const*  e){
        cout << "Error message: "<<e<<endl;
    }
    catch(string  &e){
        cout << "Error message string: "<<e<<endl;
    }

    cout << "continue..." << endl;
    return 0;
}
