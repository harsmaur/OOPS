#include<iostream>
using namespace std;

// syntax
//derived(int a, int b, int c, int d):Base1(a), Base2(b){}

  
    
    /*
Case1:
class B: public A{
   // Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()
};

*/


class Base1{
    int data1;

    public:
          Base1(int i){
              data1 = i;
              cout<<"Base1 constructor is called "<<endl;
            
          }
          void printdata1(){
              cout<<"The value of data1 is "<<data1<<endl;
          }

};


class Base2{
    int data2;

    public:
          Base2(int i){
              data2 = i;
              cout<<"Base2 constructor is called "<<endl;
            
          }
          void printdata2(){
              cout<<"The value of data2 is "<<data2<<endl;
          }

};

class derived: public Base1, public Base2{          // base2 pehle kre base1 se to base 2 pehle run hhoga

    int derived1,  derived2;

    public:
    
    derived(int a, int b, int c, int d):Base1(a), Base2(b){
    
    derived1 = c;
    derived2 = d;
    cout<<"Derievd class constructor is called"<<endl;
    }

    void printdata3(void){
        cout<<"The value od derived1 and derived2 is "<<derived1<<" , "<<derived2<<endl;
    }

};

int main(){

derived d1(1,2,3,4);

d1.printdata1();
d1.printdata2();
d1.printdata3();

    return 0;
}