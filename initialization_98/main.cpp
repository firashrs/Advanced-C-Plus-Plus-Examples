#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int values[] = {1, 3, 6};
    cout<<values[0]<<endl;

    class C{
    public:
        string text;
        int id;
    };

    C c1 = {"Firas", 7};

    cout << c1.text<<endl;

    struct S{
        string text;
        int id;

        void print(){
            cout<<id<<": "<<text<<endl;
        }
    };

    S s1 = {"Word", 1000};
    s1.print();


    struct R{
        string text;
        int id;

        void print(){
            cout<<id<<": "<<text<<endl;
        }
    } r1= {"ZAWARDO", 9000}, r2= {"STONE", 4200};

    r1.print();

    int n{100};
    cout<<n<<endl;
    string s{"hello"};
    cout<<s<<endl;

    int numbers[]{1, 2, 3};
    for (int i : numbers){
        cout<<i<<endl;
    }

    /*int *pInt = new int;
    *pInt = 33;
    *(++pInt) = 44;
    cout<<*(--pInt)<<endl;
    cout<<*(++pInt)<<endl;*/

    int *pInt = new int[4]{1, 5, 2, 9};
    cout<<pInt[2]<<endl;

    int *pSom{nullptr}; //equivalent to int *pSom{}


    struct {
        int value = 7;
        string text;
    } sss{5, "HI"};

    cout<<sss.value<<endl;

    vector<string> v{"one","two","three","four"};


    cout<<v[3]<<endl;

    return 0;
}
