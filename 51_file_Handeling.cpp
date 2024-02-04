#include <fstream>
#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;
                                            // Writing in file
int main(){

     //object method 
    fstream obj;
    obj.open("Today.txt", ios :: out);
    obj<<"HEYY THIS IS FILE HANDELLING "<<endl;
    obj<<"Youre learning file i/o operations "<<endl;
    obj.close();


    //put() method 

    ofstream object;
    object.open("PUT.txt", ios :: app);
    
    char ch[200] = " Wrtitng in file through put() function  ";
    int length = strlen(ch);

    for(int i = 0; i < length ; i++){

        object.put(ch[i]);
    }
    object.close();



//      write method 
    
    fstream object1("Write.txt", ios :: out);
    char sentence[100] = "Writing in file through write() operation ";

    object1.write(sentence, 50);
    object1.close();


    
    return 0;
}