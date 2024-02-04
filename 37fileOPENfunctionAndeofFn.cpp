           // Opening files using open()  //
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
// Declaring an object of the type ofstream
 ofstream out;

 //connecting the object out to the text file using the member fn open()
 out.open("35sample.txt");

 //writing to the file
 out<<"This is me \n";
 out<<"the only way";
 out<<" this is also me";

// closing the file connection 
 out.close();



ifstream in;
 
 in.open("35sample.txt");
 string st;

// giving output the string lines by storing in st until the file reaches the end of it
 while(in.eof()==0){    //eof end of file
     getline(in, st);
     cout<<st<<endl;
 }
 in.close();


    return 0;
}
       

/*Unlike what we did earlier passing the text file in the object while creating it, we’ll first just declare an object out(any name you wish) of the type ofstream and use its open method to open the text file in the program.

We’ll pass some string lines to the text file using the out operation.

We’ll now close the file using the close function. Now closing is explicitly used to make the system know that we are done with the file. It is always good to use this.*/



//Using the member function "eof()":

//The member function eof(End-of-file) returns a boolean true if the file reaches the end of it and false if not.