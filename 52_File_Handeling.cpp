#include <fstream>
#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;
                                            // reading from a file
int main(){
       // get() method         /// char by char

       ifstream obj1("Today.txt", ios :: in);

         char ch;

         while(!obj1.eof()){

           ch =  obj1.get();
           cout<<ch;
         }
           obj1.close();
 
              // object method                 // word by word
         fstream obj2("Today.txt", ios :: in | ios :: app); 
         char word;

         while(!obj2.eof()){
            obj2>>word;
            cout<<word;
         }
         obj2.close();

cout<<endl;
         // 
         fstream obj3("Today.txt", ios :: in ); 
          char words[100];
         while(!obj3.eof()){
            obj3.read(words,100);
            cout<<words;
         }
         obj3.close();

    return 0;
}