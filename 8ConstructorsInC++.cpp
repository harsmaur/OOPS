#include <iostream>
using namespace std;

class complex
{

    //  Creating a constructor
    // it is a special memeber function with same name as of the class
    // It is used to initialize the objects of its class
    // it is automatically invoked(called) whenever an  object is created

    int a, b;

public:
       complex(void); //constructor declaratiion

        void printnum(void)
    {
        cout << " your complex number is " << a << " + " << b << "i" << endl;
    }
};

complex ::complex(void)      // -----------> this is a defualt constructor as it takes no parameters 
{
    a = 10;
    b = 0;
}

int main()
{
    complex c;
    c.printnum();

    return 0;
}


// they do not have return types and they cannot return values 
// it can have  default arguments 
// we cannot refer to thier address//


//========================================================================================================

#include <iostream>
using namespace std;

class complex
{
    
    int a, b;
    
public:
       complex(int, int);                      //constructor declaratiion

        void printnum(void)
    {
        cout << " your complex number is " << a << " + " << b << "i" << endl;
    }
};


complex ::complex(int x, int y)               // -----------> this is a parametrized constructor as it takes 2 parameters 
{

    a = x;
    b = y;
}


int main()
{

    // implicit call 
    complex c(2, 4);

    c.printnum();


    //Explicit call

     complex c1 = complex(5, 6);
     c1.printnum();
    return 0;
}
