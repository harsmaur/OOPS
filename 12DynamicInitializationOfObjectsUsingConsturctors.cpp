// #include <iostream>
// #include<conio.h>
// using namespace std;

// class Bankdeposit
// {
//     int principal;
//     int years;
//     int interestrate;
//     int returnvalue;

// public:
//     Bankdeposit(){};
//     Bankdeposit(int p, int y, float r);
//     Bankdeposit(int p, int y, int r);

//     void show();
// };

// Bankdeposit ::Bankdeposit(int p, int y, float r)
// {
//     principal = p;
//     years = y;
//     interestrate = r;
//     returnvalue = principal;

//     for (int i = 0; i < y; i++)
//     {
//         returnvalue = returnvalue * (1+interestrate);
//     }
// }

// Bankdeposit ::Bankdeposit(int p, int y, int r)
// {
//     principal = p;
//     years = y;
//     interestrate = float(r)/ 100;
//     returnvalue = principal;

//     for (int i = 0; i <= y; i++)
//     {
//         returnvalue = returnvalue * (1+interestrate);
//     }
// }
// void Bankdeposit:: show()
// {

//     cout << "The principal amount was " << principal
//          << ".Return value after " << years << "  years  is " << returnvalue << endl;
// }

// int main()
// {
    

//     Bankdeposit bd1, bd2, bd3;
//     int p, y;
//     float r;
//     int R;

//     cout << "Enter the value of p y and r" << endl;
//     cin >> p >> y >> r;
//     bd1 = Bankdeposit(p, y, r);
//     bd1.show();

//     cout << "Enter the value of p y and R" << endl;
//     cin >> p >> y >> R;
//     bd2 = Bankdeposit(p, y, R);
    
//     bd2.show();

//     return 0;
// }


#include<iostream>
using namespace std;


class BankDeposit{
    int principal;
    int years;
    float interestRate;
    float returnValue;

    public:

        BankDeposit(){} // created a default constructor. It'll be invoked everytime an object is created.
        //(SPECIALLY WHEN THERE ARE MANY CONSTRUCTORS and compiler have to choose for object then it ll be invoked and we'll not get an error for not specifying which constructor we have to call)


        BankDeposit(int p, int y, float r); // r can be a value like 0.04
        BankDeposit(int p, int y, int r); // r can be a value like 14
        void show();
};
BankDeposit :: BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i <= y; i++)
    {
        returnValue = returnValue * (1+interestRate);
    }
}

BankDeposit :: BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r)/100;
    returnValue = principal;
    for (int i = 0; i <= y; i++)
    {
        returnValue = returnValue * (1+interestRate);
    }
}

void BankDeposit :: show(){
    cout<<endl<<"Principal amount was "<<principal
        << ". Return value after "<<years
        << " years is "<<returnValue<<endl;
}
int main(){
    BankDeposit bd1, bd2, bd3;  // since theyre not initialized with parametres for the constructors,, the default constructor will be called and we'll not get any error 
    int p, y;
    float r;
    int R;
    
    
    cout<<"Enter the value of p y and r"<<endl;
    cin>>p>>y>>r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();


    cout<<"Enter the value of p y and R"<<endl;
    cin>>p>>y>>R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();
    return 0;
}
