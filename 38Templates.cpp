                                             //Templates// 


                                /*What is a template in C++ programming?

 A template is believed to escalate the potential of C++ several fold by giving it the ability to define 
 data types as parameters making it useful 
 to reduce repetitions of the same declaration of classes for different data types. Declaring 
 classes for every other data type(which if counted is 
 way too much) in the very first place violates the DRY( Don’t Repeat Yourself) rule of programming 
 and on the other doesn't completely utilise the potential of C++.*/




                                            /*Why templates?

DRY Rule:-
To understand the reason behind using templates, we will have to understand the effort behind declaring 
classes for different data types. Suppose we 
want to have a vector for each of the three(can be more) data types, int, float and char. Then we’ll 
obviously write the whole thing again and again
 making it awfully difficult. This is where the saviour comes, the templates. It helps parametrizing 
 the data type and declaring it once in the source
  code suffice. Very similar to what we do in functions. It is because of this, also called, 
  ‘parameterized classes’.

Generic Programming:-
It is called generic, because it is sufficient to declare a template once, it becomes general and 
it works all along for all the data types.*/

#include<iostream>
using namespace std;

template <class T>
class vector{
    public:
    T *arr;
    int size;

    vector(int m){
        size = m;
        arr = new T[size];

    }

      T dotproduct(vector &v){
          T d = 0;
          for ( int i = 0; i < size; i++)
          {
              d+= this->arr[i]*v.arr[i];
            
          }
          return d;
          
      }
};

int main(){
    vector <float> v1(3);  //vector 1 with float data type//

    v1.arr[0] = 4.5;
    v1.arr[1] = 4.5;
    v1.arr[2] = 4.5;

   vector <float> v2(3);
    v2.arr[0] = 1;
    v2.arr[1] = 2;
    v2.arr[2] = 3;

     float a = v1.dotproduct(v2);
     cout<<a<<endl;
     return 0;

}

