
// The virtual base class is a concept used in multipath
// inheritances to prevent ambiguity between multiple instances.//

#include <iostream>
#include <stdlib.h>
using namespace std;


class student{   //grandparent class
    protected:
    int roll_num;

    public:

    void set_num(int a){
     roll_num = a;
    }

    void print_num(){
        cout<<"Your roll no. is "<<roll_num<<endl;
    }
};

class test: virtual public student{  // parent 1 class
  // if we make a base or say grandparent class as virtual with keyword virtual
    protected:
    float math, physics;

    public:

    void set_mark(float m1, float p1){
        math = m1;
        physics = p1;
    }

    void displaymarks(){
        cout<<"Your marks are "<<endl;
        cout<<"maths "<<math<<endl;
        cout<<"Physics "<<physics<<endl;

    }

};

class sports: virtual public student{  // Parent 2 class 
    protected:
    float score;

    public:

    void set_score(float sc){
        score = sc;

    }

    void displayscore(){
cout<<"Your score is "<<score<<endl;
    }

};


class result: public test, public sports{  // Child class
  /* By declaring virtual base class in parent 1 and parent 2 then in child 
  class only one copy of  GRANDPARENT class will
   be inherited */  
      protected:
      float total;
      
      public:

      void display(void){
          cout<<"Your total marks" <<endl;
           
           total = math+physics+score;

           cout<<"Your total marks are "<<total<<endl;
      }

};


int main(){

system("cls");
    result L1;
    L1.set_num(1234);
    L1.set_mark(234.8,654.3);
    L1.set_score(23.8);
    L1.display();

    return 0;
}
