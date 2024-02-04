#include <iostream>
using namespace std;

class type_two;  // forward declaration of destination class to be converted 

class type_one{
    string str = "HARSH_MAURYA";


    public:
     
     string get_string(){
        return str;
     }

     void display(){
        cout<<str<<endl;
     }
      
      operator type_two();  //declaration of casting operator for class 
      //converion it will bw of type destination class.
};

class type_two{
    public:
    string b;
    public:

    void display(){
        cout<<b<<endl;
    }
};
  
 type_one:: operator type_two(){
    type_two t;
    t.b = str;
    return t;
 }


    int main(){

        type_one t1;
        type_two t2;

        t2 = t1;  

        t2.display();

        
        return 0;
    }
    

    