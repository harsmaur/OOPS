#include<iostream>
using namespace std;
template<class T1, class T2>
 float funcAverage(T1 a, T2 b){
     float avg = (a+b)/2;
     return avg;

}
int main(){
    float a;
    a = funcAverage(9, 1);
    cout<<a<<endl;
    return 0;
}
