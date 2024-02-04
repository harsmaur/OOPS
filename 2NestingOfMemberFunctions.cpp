#include<iostream>
#include<string>
using namespace std;

        // Nesting of member fucntioncs

class binary{

    private:
          string s; 
          void chk_bin(void);
                   // by default members of class is private //
    public:
          void read(void);
          void onescomplement(void);
          void display(void);
};

void binary :: read(void){
    cout<<"Enter the  binary number"<<endl;
    cin>>s;
}

void binary :: chk_bin(void)
{

         for(int i =0;i<s.length();i++){

         if(s.at(i) != '0' && s.at(i) != '1'){

                     cout<<"Incorrect binary format"<<endl;
                     exit(0);
                       }
             }
 }

   void binary :: onescomplement(void){

       chk_bin(); 
        //in the body of the “ones_compliment” function; the “chk_bin” function is called, and as we have discussed above that if one member function 
       //is called inside the other member function of the same class it is called nesting of a member.        

       for(int i=0;i<s.length();i++)
       {
           if(s.at(i)=='0'){
               s.at(i)= '1';
           } 
               else{
                   s.at(i)= '0';
               } 
           }
       }
   
   void binary :: display(void)
   {
       cout<<"Displaying the binary number"<<endl;
       for(int i=0;i<s.length();i++)
       {
           cout<< s.at(i);
       }   
       cout<<endl;
   }

int main(){

         binary b;
         b.read();
// b.chk_bin();    //now we cannot call this here since it is private//
         b.display();
         b.onescomplement();
         b.display();

    return 0;
}


// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public


// structures in C++ are typedefed


// you can declare objects along with the class declaration like this:
/* class Employee{
            // Class definition
        } harry, rohan, lovish; */

// harry.salary = 8 makes no sense if salary is private
