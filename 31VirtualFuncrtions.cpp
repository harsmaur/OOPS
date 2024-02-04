#include<iostream>
using namespace std;


class base_class{
    public:
    int var_base = 1;

     virtual void display(){                                   // virtual keyword//
        cout<<"1 Displaying base class variable "<<var_base<<endl;
    }

};

class derived_class: public base_class{

    public:
    int var_drd =2;

    void display(){
        cout<<"2 Displaying   base  class variable "<<var_base<<endl;
        cout<<"2 Displaying   derived   class variable "<<var_drd<<endl;
    }


};


int main(){

    base_class* bptr;
    base_class obj_base;
    derived_class obj_drd;

    bptr= &obj_drd;
    bptr->display();

    return 0;
}


//  using virtual function instead allows us to override the default function 

// The main thing to note here is that if we don’t use the “virtual” keyword with the 
//“display” function of the base class then beside of the point that we have pointed our 
//base class pointer to derived class object still the compiler would have called the “display” 
//function of the base class because this is its default behavior as we have seen in the previous tutorial.

// But we have used the “virtual” keyword with the “display” function of the base class to make it virtual
// function so when the display function is called by using the base class pointer the display function of
// the derived class will run because the base class pointer is pointing to the derived class object.//
