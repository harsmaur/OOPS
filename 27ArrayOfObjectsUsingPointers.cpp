#include<iostream>
using namespace std;
 

 class Mall{
     protected:
     int  id;
      float  price;

      public:
       void setdata(int a, float b){
           id = a;
           price = b;;

       }

       void getdata(void){
           cout<<"THE CODE OF THE PRODUCT IS "<<id<<endl;
           cout<<"THE PRICE OF ITEM IS "<<price<<endl;

       }

 };

 int main(){
     int size = 3, p;
     float q;

     Mall * ptr = new Mall [size];
     Mall * TempPtr = ptr;

     for ( int i = 0; i < size; i++)
     {
         cout<<"Enter id and price of item "<<i+1<<endl;
         cin>>p>>q;
         ptr->setdata(p, q);
         ptr++;
        
     }

     for(int j = 0; j < size; j++){
         cout<<"Item nmber "<<j+1<<endl;
         
         TempPtr->getdata();
         TempPtr++;
     }
     
     
     return 0;
 }
