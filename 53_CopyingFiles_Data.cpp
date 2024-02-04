#include <fstream>
#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;
                                            // reading from a file
int main(){

    ifstream o1("Today.txt");

    ofstream o2("Copy.txt", ios :: app);
    char ch;

    while( !o1.eof()){
           
           ch = o1.get();     // stroing data from Today.txt file
           o2<<ch; 
           
           // copying to copy.txt file   
           }
            o1.close();
            o2.close(); 
    return 0; 
    }