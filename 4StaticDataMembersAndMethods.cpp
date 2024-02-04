#include <iostream>
using namespace std;

class Chef
{
    int Id;
    static int count;

public:

    void setdata(void)
    {
        cout << "Enter the Id of chef " << endl;
        cin >> Id;
        count++; 
    }
 

    void getdata(void)
    {
        cout << "The chef with Id " << Id << " And Chef numeber is  " << count << endl;
    }


    static void getcount(void)  
    {
        cout << " The count of chef is " << count << endl;
        //We have defined a static “getCount” function. This function will print the value of the     
        //variable count”. The main thing to note here is that “getCount” function is static, so if we try    to  access any data members or member functions 
        //which are not static the compiler will throw an error.
        
    }
};



int Chef ::count;         //IT IS NECESORRY TO DECLARE HERE AS WELL THE STATIC MEMEBER//


int main()
{
    Chef ranbir, mohan, sahan;


    ranbir.setdata();
    ranbir.getdata();
    Chef::getcount();           //The functions “setData”, “getData” are called by the three objects  “ranbir” "mohan" "sahan", the function “getCount”
                                // is called by using "class name" and "scope resolution operator" because it is a "static method".

    mohan.setdata();
    mohan.getdata();
    Chef::getcount();


    sahan.setdata();
    sahan.getdata();
    Chef::getcount();


    // harry.id = 1;
    // harry.count=1;          // cannot do this as id and count are private

    return 0;
}


// When a static method is created, they become independent of any object and class. Static methods can only 
// access static data members and static methods. Static methods can only be accessed using the scope resolution operator.

