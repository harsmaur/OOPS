#include <iostream>
using namespace std;

int main(){

    int a = 5;
  
    int* ptr = &a;

    cout<<"The value of a is "<<*(ptr)<<endl;


    // New Keyword 
 float *p = new float(50.76);
 cout<<"the value at address p is "<<*(p)<<endl;


//  Delete Keyword

int *arr = new int[3];
arr[0] = 1;
arr[1] = 4;
arr[2] = 6;
delete[] arr;  // now the arr will give garbage values


cout<<"THE VALUE OF ARR[0] IS "<<arr[0]<<endl;
cout<<"THE VALUE OF ARR[1] IS "<<arr[1]<<endl;
cout<<"THE VALUE OF ARR[2] IS "<<arr[2]<<endl;

    return 0;
}
