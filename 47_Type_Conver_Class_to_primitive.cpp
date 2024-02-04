#include <iostream>
using namespace std;

class complex{
    int a, b;

    public:
    void setdata(int x, int y){
    a = x;
    b = y;
    }

    void display(){
        cout<<"a = "<<a<<", b = "<<b<<" "<<endl; 
           }
      
         operator int(){
            return a;
           }
};
           
int main(){

    complex c1;
    c1.setdata(3,4);
    c1.display(); cout<<endl;
    int x = c1;
    cout<<"x = "<<x<<endl;
}          

      