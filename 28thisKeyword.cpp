/*
                                     'this’ Pointer in C++
“this” is a keyword that is an implicit pointer. “this” pointer points to the object which calls the member function.
                 “this” pointer can be used to return a reference to the invoking object.
*/

#include <iostream>
using namespace std;


class A{
    int a;
    public:
    void setdata(int a){
       this->a = a;

    }
    void getedata(void){
        cout<<" The value of a is "<<a<<endl;
    }
};

int main(){

    A a;
    a.setdata(7);
    a.getedata();

    return 0;
}
