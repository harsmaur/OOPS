#include <iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    // connecting our file with hout stream
    ofstream hout("35sample.txt");

    // creating a name string and filling it with string enetred by he user
     cout<<"Enter your name"<<endl;
     string name;
     cin>>name;

    //   writing string to the file
      hout<<"my name is "+ name;

      hout.close();



    ifstream hin("35sample.txt");

    string content;

    // reading to the file
    getline(hin, content);
    // hin>>content;
    cout<<"The content of the file is :"<<content<<endl;
    hin.close();
    return 0;
}