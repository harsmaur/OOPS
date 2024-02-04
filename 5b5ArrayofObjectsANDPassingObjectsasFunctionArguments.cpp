                 //Paasing objects as function argurments //

#include<iostream>
using namespace std;


class complex{
   private:
    int a;
    int b;

    public:
    void setdata(int v1, int v2){
        a= v1;
        b= v2;

    }
    void setdatabysum(complex o1, complex o2){  
        // to pass an object as parameter we have to write the class name and then the variable in the parameter

          a = o1.a + o2.a;   // o1 ka a + o2 ka a
          b = o1.b + o2.b;   // o1 ka b + o2 ka b
    }
 void printdata(void){
     cout<<" Your complex number is "<<a<<"+"<<b<<"i"<<endl;
 }



};

int main(){
    complex c1, c2, c3;
    c1.setdata(3,4);
    c1.printdata();

    c2.setdata(4,5);
    c2.printdata();

    c3.setdatabysum(c1,c2); //passing objects c1 and c2  as function arguments to setdatabysum function //
    c3.printdata();




return 0;


}



