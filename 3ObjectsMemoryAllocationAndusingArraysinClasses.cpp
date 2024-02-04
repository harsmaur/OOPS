#include <iostream>
using namespace std;

class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void)
    {
        counter = 0;
    }

    void setPrice(void);
    void DisplayPrice(void);
};

void shop ::setPrice(void)
{
    cout << "Enter the Id of your item " << counter + 1 << endl;

    cin >> itemId[counter];
    cout << "Enter the Price of your item " << endl;
    cin >> itemPrice[counter];
    counter++;
}


void shop ::DisplayPrice(void)
{


    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }

}

int main()
{


    shop dukan;
    dukan.initCounter();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.DisplayPrice();


    return 0;
}


/*Objects Memory Allocation in C++
The way memory is allocated to variables and functions of the class is different even though they both are from the same class.

The memory is only allocated to the variables of the class when the object is created. The memory is not allocated to the variables when the class is declared.

 But the memory is allocated to the function only once when the class is declared. So the objects don’t have individual copies of functions only one copy is shared among each object.*/
 