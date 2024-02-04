 #include <iostream>
 using namespace std;
 
 class Rectangle{
     
         int length, breadth, area;
         
         public:
         
         Rectangle(int l, int b){
             length = l;
             breadth = b;
             area = l*b;
         }
         void output(){
             cout<<" area = "<<area<<endl;
         }
 };
 
 
 class Triangle{
     
        int height, base, area;
     
     public:
     
        Triangle(int h,  int b){
           height = h;
           
           base= b;
           
           area = 0.5*base*height;
     }
     void display(){
         cout<<" area = " <<area<<endl;
     }
     
     operator Rectangle(){
         Rectangle r1(base, height);
         return r1;
         
     }
     
     
 };
 
 
 
 int main(){
     
     Triangle t(50, 40);
     t.display();
     
     Rectangle r = t;   // triangle type(source class) to rectangle type(destination class)
     r.output();
     return 0;
 }
 
 //operator function in source class