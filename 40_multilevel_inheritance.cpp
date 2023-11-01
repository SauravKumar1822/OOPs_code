#include <bits/stdc++.h>
using namespace std;

class Student{
    protected:
        int roll;

    public:
        void setRoll(int _roll){
            roll = _roll;
        }
        void getRoll(void){
            cout << "Roll NO " << roll << endl;
        }
};

class Exam : public Student{
protected:
    float maths, physics;

public:
    void setMarks(float a, float b){
        maths = a;
        physics = b;
    }
    void getMarks(){
        cout << "Maths " << maths << endl;
        cout << "Physics " << physics << endl;
    }
};

class Result : public Exam{
    float percentage;

public:
    void display(){
        getRoll();
        getMarks();
        cout << "your percentage is: " << (maths + physics) / 2 << endl;
    }
};

int main(){
    Result harry;
    harry.setRoll(420);
    harry.setMarks(99.9, 100);
    harry.display();
    return 0;
}