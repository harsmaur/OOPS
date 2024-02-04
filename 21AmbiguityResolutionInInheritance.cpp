
/*  Ambiguity in inheritance can be defined as when 
  one class is derived for two or more base classes then there are chances that the
  base classes have functions with the same name.
  So it will confuse derived class to choose from similar 
  name functions. To solve this ambiguity scope resolution operator is used “::”.*/

#include <iostream>
using namespace std;

class base1{
    public:
    
    void greet(){
    cout<<"Hello world !!"<<endl;
    }
};

class base2{
    public:
    void greet(){
        cout<<"Kaise ho ?"<<endl;
     
   }
};


class derived : public base1, public base2{


public:


void greet(){
    base2 :: greet();    // WE use :: scope resolution operator with the member fn of the class from  we want the member funtion
}
    
};
  
  
int main(){


base1 b1;
base2 b2;

b1.greet();
b2.greet();

derived d;
d.greet(); // it is ambiguous if  do not use ambigous scope resolution operator :: like above described//


    return 0;
}


//========================================================================================================


#include <iostream>
using namespace std;

class base1{
    public:

    void greet(){
    cout<<"Hello world !!"<<endl;
    }
};

class base2{
    public:
    void greet(){
        cout<<"Kaise ho ?"<<endl;
    }
};

class derived : public base1, public base2{

public:

void greet(){
cout<<"IT WILL OVERRIDE THE MEMBER FUNCTION GREET() OF BASE CLASSES "<<endl;;
}
 // here we dont need to do that 
};
int main(){


    derived d;
    d.greet();
    return 0;
}
