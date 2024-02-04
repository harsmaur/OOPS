#include<iostream>
#include<string>
using namespace std;

class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r){
            title =  s;
            rating = r;
        }

        virtual void display(){}
};

class CWHVideo: public CWH
{
    float videoLength;
    public:
        CWHVideo(string s, float r, float vl): CWH(s, r),videoLength(vl){
            
        }
        void display(){
            cout<<"This is an amazing video with title "<<title<<endl;
            cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
            cout<<"Length of this video is: "<<videoLength<<" minutes"<<endl;
        }
};    


class CWHText: public CWH
{
    int words;
    public:
        CWHText(string s, float r, int wc): CWH(s, r){
            words = wc;
        }
     void display(){
      cout<<"This is an amazing text tutorial with title "<<title<<endl;
      cout<<"Ratings of this text tutorial: "<<rating<<" out of 5 stars"<<endl;
      cout<<"No of words in this text tutorial is: "<<words<<" words"<<endl;
         }
};

int main(){
    string title;
    float rating, vlen;
    int words;

    // for Code With Harry Video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title, rating, vlen);

    // for Code With Harry Text
    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;
    CWHText djText(title, rating, words);

    CWH* tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();   //virtual functions are accessed by object pointers

    return 0;
}


/*Rules for virtual functions

They cannot be static
They are accessed by object pointers
Virtual functions can be a friend of another class
A virtual function in the base class might not be used.
If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class*/



// #include <iostream>
// #include <string>
// #include<stdlib.h>
// using namespace std;

// class cwh
// {
// protected:
//     string title;
//     float rating;

// public:
//     cwh(string s, float r)
//     {
//         title = s;
//         rating = r;
//     }
//     virtual void display(){}
    
// };

// class cwhvideo : public cwh
// {
//     float videolength;

// public:
//     cwhvideo(string s, float r, float vl) : cwh(s, r)
//     {
//         videolength = vl;
//     }
//     void dislpay()
//     {
//         cout << "The title of video is " << title << endl;
//         cout << "The rating  of video is " << rating << endl;
//         cout << "The length  of video is " << videolength <<"minjtes"<< endl;
//     }
// };

// class cwhtext : public cwh
// {
//     int words;

// public:
//     cwhtext(string s, float r, int w) : cwh(s, r)
//     {
//         words = w;
//     }
//     void display()
//     {
//         cout << "The title of textvideo is " << title << endl;
//         cout << "The rating  of video is " << rating << endl;
//         cout << "The numer of words  in the text of video is " << words << endl;
//     }
// };

// int main()
//  { //system("cls");
//     string title;
//     int wordz;
//     float rating, vlen;

//     title = "java tut";
//     rating = 4.58;
//     vlen = 5.9;
//     cwhvideo djvideo(title, rating, vlen);
//     // djvideo.dislpay();

//     title = " text tut";
//     rating = 5;
//     wordz = 500;
//     cwhtext text(title, rating, wordz);
//     // text.display();

//     cwh * tut[2];
//     tut[0] = &djvideo;
//     tut[1] = &text;

//     tut[0]->display();
//     tut[1]->display();


//     return 0;
// }
