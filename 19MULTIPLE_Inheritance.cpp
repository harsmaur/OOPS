#include<iostream>
using namespace std;

class base1{
    protected:
    int base1int;
    public:

    void getbase1(int a){
        base1int = a;

    }
};

class base2{
    protected:
    int base2int;
    public:

    void getbase2(int a){
        base2int = a;

    }
};

class base3{
    protected:
    int base3int;
    public:

    void getbase3(int a){
        base3int = a;

    }
};

// syntax of multiple inheritance

//class derived : visibility_mode base1, : visibility_mode base2

class derived :public base1, public base2, public base3{

public:
void show(){
    cout<<"The value of base 1 is "<<base1int<<endl;
    cout<<"The value of base 2 is "<<base2int<<endl;
    cout<<"The value of base 3 is "<<base3int<<endl;
    cout<<"The value of base 1 + base 2 + base 3 is "<<base1int+base2int+base3int<<endl;
}
};

int main(){

    derived harsh;
    harsh.getbase1(45);
    harsh.getbase2(45);
    harsh.getbase3(30);
    harsh.show();

    return 0;
}

