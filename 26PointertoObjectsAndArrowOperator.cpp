#include<iostream>
using namespace std;

class complex{
    int real, imaginary;
    public:

    void setdata(int a, int v){
        real = a;
        imaginary = v;

    }

    void getdata(){
        cout<<"The value of real is "<<real<<endl;
        cout<<"The value of imaginary is "<<imaginary<<endl;
    }
};

int main(){
complex c1;


complex *ptr = new complex;  //  As discussed before pointers are used to store addresses
                             // of variables which have data types 
                             // like int, float, double etc. But pointer can also store the address of 
                            //an object

// Array of objects using ponters//
complex *htr = new complex[4];
 (htr+1)->setdata(14,15);
 (htr+1)->getdata();
 (htr+2)->setdata(20,30);
 (htr+2)->getdata();
htr->setdata(9,10);
htr->getdata();       //arrow operator “->”
                      //The main thing to note here is that we called the member function with pointers by 
                      //using arrow operator “->” instead of the dot operator “.”  still it will give the same results.
c1.setdata(5,4);
c1.getdata();

(*ptr).setdata(7,8);
(*ptr).getdata();


    return 0;
}
