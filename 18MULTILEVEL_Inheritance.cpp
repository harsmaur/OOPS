#include <iostream>
using namespace std;

class student{
    protected:
    int roll_number;

    public:

    void set_rollnumber(int);
    void get_rollnumber();

};

void student ::set_rollnumber(int r){
    roll_number = r;

}

void student :: get_rollnumber(){
    cout<<"Your roll number is "<<roll_number<<endl;
}


class Exam : public student{
    protected:
    float math;
    float physics;

    public:

    void set_marks(float, float);
    void get_marks(void);
    
};

void Exam ::set_marks(float m1, float p1){
    math = m1;
    physics = p1;
}

void Exam ::get_marks(){
    cout<<"Your maths marks are "<<math<<endl;
    cout<<"Your physics marks are "<<physics<<endl;

}

class Result : public Exam{

    float percentage;

    public:
    void display(){

        get_rollnumber();
        get_marks();
        cout<<"Your result is "<<(math+physics)/2<<"%"<<endl;


    }
    
};


int main(){

Result harsh;
harsh.set_rollnumber(901);
harsh.set_marks(98.4, 87.5);
harsh.display();

    return 0;
}
