#include <iostream>
#include<fstream>
using namespace std;

/* The useful classes for working with files in c++ are:
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase




In order to work with file in c++, there are two ways to open a file:

1. using the constructor 
2. using the member function open() of the class*/


int main(){


    string ht = "harsh";
    string ht2;

// opening files using constructor and writing  it
// ofstream out("35sample.txt"); // write operation
// out<<ht;


// opening files using constructor and reading to it
ifstream in("sample35b.txt");
// in>>ht2;
getline(in, ht2); 
cout<<ht2;

    return 0;
}
