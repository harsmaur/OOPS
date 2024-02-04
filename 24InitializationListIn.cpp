#include<iostream>
using namespace std;

/*

Syntax for initialization list in constructor:
 Constructor (argument ) : initialization-section
 {
     assignment + other code;
 }


class Test{
    int a;
    int b;

    public:
    Test(int i, int j): a(i), b(j){
             
    }
};

*/

//The initialization list in constructors 
//is another concept of initializing the data members of the class.

class Test{
    public:
    int a;
    int b;

    public:
    // Test(int i, int j): a(i), b(i+j)
    //Test(int i, int j): a(i), b(2*j)
    // Test(int i, int j): a(i), b(a+j)
    //Test(int i, int j): b(j), a(i+b)  // this will create problrm bca a will be initialized first
     Test(int i, int j): a(i), b(j)
    {
         cout<<"Constructor executed"<<endl;
         cout<<"value of a is "<<a<<endl;
         cout<<"Value of b is "<<b<<endl;    
    }
};



int main(){
    Test t(4,6);


    return 0;
}

