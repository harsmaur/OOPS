#include <iostream>
using namespace std;
class complex; //declaration(forward)

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    
    int sumRealcomplex(complex, complex);
    int sumImagcomplex(complex, complex);
};

class complex
{

    int a, b;
    friend int Calculator ::sumImagcomplex(complex o1, complex o2);
    friend int Calculator ::sumRealcomplex(complex o1, complex o2);

public:
    void setdaata(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
    void printdata()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumRealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int Calculator ::sumImagcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}



int main()
{
    complex o1, o2;
    o1.setdaata(2, 4);
    o1.printdata();

    o2.setdaata(5, 6);
    o2.printdata();

    Calculator calc;
    
    int sumofreal = calc.sumRealcomplex(o1, o2);
        cout << "The sum of real part of complex is " << sumofreal << endl;
    int sumofimag = calc.sumImagcomplex(o1, o2);
    
    cout << "The sum of Imaginary  part of complex is " << sumofimag << endl;
    return 0;
}
