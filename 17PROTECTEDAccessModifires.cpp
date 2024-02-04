//Protected access modifiers are similar to the private access modifiers but protected access modifiers can be accessed in the derived class whereas private access modifiers cannot be accessed in the derived class.

#include <iostream>
using namespace std;

class base
{

    protected: //(it can now be inherited)
        int a;
    private:
        int b;
};
/*
 
                         public derivation      private derivation     protected derivation         
    private members      not inherited          not inherited          not inherited
    protected members    protected              private                protected
    public  members      public                 private                protected  */

class derived : protected base
{
    
};

int main()
{
    base b;
    derived d;
    ;
    // cout << b.a; work as it is protected in base as well as in derived
    return 0;
}
