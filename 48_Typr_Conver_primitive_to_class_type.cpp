#include <iostream>
using namespace std;

class complex{
    
    int a, b;
   
   public: 
    complex(){};
    complex(int k ){
        a = k; b = 0;
    }

    void setdata(int x, int y){
        a = x;
        b = y;
    }

   void display(){
    cout<<"a ="<<a<<" b = "<<b<<endl;
   }  
};



int main(){

    complex c1;
    int x = 10;
    c1 = x;

    c1.display();
    return 0;
}

