#include <iostream>
using namespace std;


class Complex
{
    int a, b;
     
     // decleartion of friend funcion 

    // Below line means that non member - sumComplex funtion is allowed to do anything with my private parts (members)
    friend Complex sumComplex(Complex o1, Complex o2);

public:
    void setdata(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
    void printdata()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};

Complex sumComplex(Complex o1, Complex o2)              // we made this fn here but it cannot access private data from class so we declare it as friend fn in class //
{
    Complex o3;
    o3.setdata((o1.a + o2.a), (o1.b + o2.b));          //"object_name"."member_name"
    // It cannot access the members directly by their names and need "object_name.member_name" to access any member.
    return o3;
}


int main()
{
    Complex c1, c2, sum;
    c1.setdata(3, 4);
    c1.printdata();

    c2.setdata(5, 6);
    c2.printdata();

    sum = sumComplex(c1, c2);
    sum.printdata();


    return 0;
}


/* Properties of a friend function

 1.  not in the scope of class 
 2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
 3. Can be invoked without the help of any object
 4. Usually contains the objects as arguments
 5. Can be declared inside public or private section of the class
 6.  It cannot access the members directly by their names and need "object_name.member_name" to access any member.

*/ 
