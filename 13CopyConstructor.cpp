// A copy constructor is a type of constructor that creates a copy of another object.
// If we want one object to resemble another object we can use a copy constructor.
// If no copy constructor is written in the program compiler will supply its own copy constructor.

#include <iostream>
using namespace std;
class Number
{
    int a = 0;
    
public:
    Number(){}


    Number(int num)
    {
        a = num;
    }

 // When no copy constructor is found, compiler supplies its own copy constructor
    Number(Number &obj){                      //copy constructor takes refrence of objects as constructor argument
                  
        cout<<"Copy constructor called !!!"<<endl;   
         a = obj.a;         //copy constructor of the “number” class is defined which takes its own
                            // reference object as a parameter and assigns values to the data members  
    }

    void display()
    {
        cout << "The number for this object is " << a << endl;
    }



};

int main(){
    Number x, y, z(45),z2;
    x.display();
    y.display();
    z.display();

    Number z1(z);     //copy constructor invoked//
    z1.display();

    Number z3 = z;
    z3.display();     // copy constructor invoked//



    z2 = z;
    z2.display();     // constructor not invoked //


    return 0;
}