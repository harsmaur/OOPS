 
// A destructor is a type of function which is called when the object is destroyed.


#include<iostream>
using namespace std;
int count = 0;

class num{

    public:

    num(){
        count++;
        cout<<"This is the time when constructor is called for object number "<<count<<endl;

    }

    ~num(){                       // destructor is created using " ~(tilted) " with class name//
        cout<<"This is the time when destructor is called for object number "<<count<<endl;
        count--;
    }
};


int main(){
    cout<<"You're in main function "<<endl;
    cout<<"Creating first object n1 "<<endl;

    num n1;
    {
        cout<<"You're Entering  in block 1  "<<endl;
        num n2, n3;
        cout<<"Exiting this block "<<endl;

    }
    cout<<"Back to main "<<endl;

    return 0;
}
