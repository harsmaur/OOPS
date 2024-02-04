#include <iostream>
using namespace std;
template <class T>
class harsh{
    public: 
    T data;
    harsh(T a){
        data = a;

    }
    void display();
};


template <class T>
void harsh<T>::display(){
    cout<<data<<endl;
}
template <class T>
void func(T a){
    cout<<a<<endl;
}

void  func(int a){
    cout<<a<<" only func is called";
}
int main(){
    // harsh <int> h(5);
    // h.display();

    func(4); // Exact match takes the highest priority 
    cout<<endl;
    func(7.8);
    return 0;
}
