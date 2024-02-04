#include <iostream>
using namespace std;


class employee
{  

      private:
      int a,b,c;

      public:
      int d,f;

      void setdata(int a1, int b1, int c1);    //decleration
      void getdata(){
          cout<<"The value of a is "<<a<<endl;
          cout<<"The value of b is "<<b<<endl;
          cout<<"The value of c is "<<c<<endl;
          cout<<"The value of d is "<<d<<endl;
          cout<<"The value of f is "<<f<<endl;


      }
};
 void employee :: setdata(int a1, int b1, int c1){
     a = a1;
     b = b1;
     c = c1;
 }
  

  
  int main(){
      employee harsh;                   // here harsh is created as obect//
      harsh.d = 30;
      harsh.f = 31;
      harsh.setdata(1,2,3);
      harsh.getdata();
      return 0;
  }


  //Classes are user-defined data-types and are a template for creating objects
  // Classes consist of variables and functions which are also called class members.
