                                        //Arrays of objects//
#include <iostream>
using namespace std;

class Employee
{
     public:
    
    int Id;
    
public:
    void setId(void)
    {
        cout << "Enter the Id of employee " << endl;
        cin >> Id;
    }
    void getId(void)
    {
        cout << "The Id of Employee is " << Id << endl;
    }
};

int main()

{   int num;
     cout<<"Enter the number of employees "<<endl;
     cin>>num;
    Employee fb[num];
    
    for (int i = 0; i < num; i++)
    {
        fb[i]. setId();
        
    }
    for (int i = 0; i < num; i++)
    {
        fb[i]. getId();
    }
    return 0;
}


