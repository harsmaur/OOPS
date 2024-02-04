#include<iostream>
using namespace std;

template<class T1 = int, class T2 = float, class T3 = char> // here we have provided template with default parameters
class harsh{
    public:
    T1 a;
    T2 b;
    T3 c;
     harsh(T1 x, T2 y, T3 z){
           a = x;
           b = y;
           c = z;
     }
     void display(){
         cout<<"The value of a is "<<a<<endl;
          cout<<"The value of b is "<<b<<endl;
           cout<<"The value of c is "<<c<<endl;
     }
};

int main(){
    harsh<> h(5, 5.8, 'z');// no need to specify here now//
     h.display();
     cout<<endl;
    harsh<float, char, int> g(4.5, 'f', 7); //we can also change the dfault by this
    g.display();
       
    return 0;
}
