#include<iostream>
using namespace std;


class base_class{
    public:
    int var_base;

    void display(){
        cout<<"Displaying base class variable "<<var_base<<endl;
    }

};

class derived_class: public base_class{

    public:
    int var_drd;

    void display(){
        cout<<"Displaying   base  class variable "<<var_base<<endl;
        cout<<"Displaying   derived   class variable "<<var_drd<<endl;
    }

};





int main(){

    base_class * base_class_ptr;// pointer bnaya base class ka

    base_class obj_base;

    derived_class obj_drived;

    base_class_ptr = &obj_drived;// base class ke pointr ko derived class ke obj pr point kra dia//

    base_class_ptr->var_base = 50;
    base_class_ptr->display(); // display() of only base class will run this is called late binding.

    // base_class_ptr->var_drd = 60; (throw eeror) with base class ptr we can get access to
    // only base class inherited data memebersor methods.
    //  base_class_ptr->display();


    base_class_ptr->var_base = 1500;
    base_class_ptr->display(); // display() of only base class will run this is called late binding

   derived_class * derived_class_ptr;
   derived_class_ptr = &obj_drived;  cout<<endl;
   derived_class_ptr->var_drd = 18;
   derived_class_ptr->display();



    return 0;
}

// In C++ we are provided with the functionality to point the pointer to derived class or base class.