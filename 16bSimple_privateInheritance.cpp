#include <iostream>
using namespace std;


class base
{
    int data1;

public:
    int data2;

    void setdata();
    int getdata1();
    int getdata2();
};

void base::setdata()
{
    data1 = 10;
    data2 = 20;
}

int base::getdata1()
{
    return data1;
}

int base::getdata2()
{
    return data2;
}

class derived : private base //now making it private// public memeber of base calss bcms private memebers of derived class
{

    int data3;

public:
    void process();
    void display();
};

void derived::process()
{
    setdata(); //caling it here //now
    data3 = data2 * getdata1();
}

void derived ::display()
{
    cout << "Value of data 1 is " << getdata1() << endl;
    cout << "Value of data 2 is " << data2 << endl;
    cout << "Value of data 3 is " << data3 << endl;
}

int main()
{

    derived der;
        // der.setdata();   // now it is the private data of base class
    der.process();
    der.display();
    return 0;
}
