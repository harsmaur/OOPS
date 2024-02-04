#include <iostream>
using namespace std;

class Calculator
{

protected:
    int num1;
    int num2;
    int sum, product, division, subtract;

public:
    void getdata(int a, int b)
    {
        num1 = a;
        num2 = b;
        sum = num1 + num2;
        product = num1 * num2;
        subtract = num1 - num2;
        division = num1 / num2;
    }

    void Displpay()
    {
        cout << "The sum of " << num1 << " and " << num2 << " is " << sum << endl;
        cout << "The product of " << num1 << " and " << num2 << " is " << product << endl;
        cout << "The subtraction of " << num1 << " and " << num2 << " is " << subtract << endl;
        cout << "The division of " << num1 << " and " << num2 << " is " << division << endl;
    }
};

class ScientificCalc
{

protected:
    int data1, i;
    int z = 1, factorial = 1, sine;
    float areaCircle;
    int areaREctangle;

public:
    void getdata1(int d)
    {
        data1 = d;
        //factorial
        for (int i = 1; i <= data1; i++)
        {
            factorial = factorial * i;
        }
    }
    void getdata2(int d)
    {
        data1 = d;
        //value of sinefuction
        if (data1 = 1)
        {
            sine = 90;
        }
        else if (data1 = 0)
        {
            sine = 0;
        }
        else if (data1 = 0.5)
        {
            sine = 30;
        }
        else if (data1 = 1.414)
        {
            sine = 45;
        }
        else
        {
            sine = 404;
        };
    }

    void getadat3(float f)
    {
        // area of circle
        areaCircle = 3.14 * f * f;
    }
    // area of reactangle

    void getdata4(float f, float g)
    {
        areaREctangle = f * g;
    }

    void display2()
    {
        cout << "The factorial is " << factorial << endl;
        cout << "The value  of sine fn is " << sine << " degree" << endl;
        cout << "The area of circle is " << areaCircle << " metre sqaure" << endl;
        cout << "The area  of rectangle is " << areaREctangle << " metere square" << endl;
    }
};

class HybridCalc : public Calculator, public ScientificCalc
{
};

int main()
{
    HybridCalc c1;
    c1.getdata(4, 2);
    c1.Displpay();
    c1.getdata1(5);
    c1.getdata2(1);
    c1.getadat3(1.0);
    c1.getdata4(7, 5.2);
    c1.display2();

    return 0;
}
