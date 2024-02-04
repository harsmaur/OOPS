#include <iostream>
#include <cmath>
 using namespace std;

 class Complex{
     int real ;
     int Imag;

     public:
     Complex(int real = 0, int Imag = 0){}
      
      void setdata(int real, int Imag){
          this->real = real;
          this->Imag = Imag;
      }

      void Display(){
          if(Imag < 0){
              cout<< " The Complex Nummber is "<<real << Imag<<" i"<<endl;
          }
          else{
              cout<<" The Complex Number is  "<<real << " + "<<Imag<<" i"<<endl;
          }
      }

      Complex operator +(Complex c){
          Complex t;
          t.real = real + c.real;    
          t.Imag = Imag + c.Imag;
          return t;
      }
          
    
    double magnitude(){
        return sqrt(real*real) + sqrt(Imag*Imag);
    }

    friend bool operator >(Complex, Complex);
 };

 
      bool operator >(Complex c1, Complex c2){
        if(c1.magnitude() > c2.magnitude()){
            return true;

        }
        else{
            return false;
        }

      }


 int main(){
     Complex c1, c2, c3;
     c1.setdata(5, 10);
     c2.setdata(10, 20);
     c1.Display();
     c2.Display();
     //c3 = c2.operator+(c1);
    //  c3 = c1+c2;
     //c3.operator+(c1);
     c3 = c1+c2;;
     c3.Display();
     cout<<endl;
     cout<<(c2>c1)<<endl;
     return 0;
 }


 /* Syntax  for operator overloading

 return_type operator+(arguments)*/

 