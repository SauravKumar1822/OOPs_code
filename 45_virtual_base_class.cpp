#include <bits/stdc++.h>
using namespace std;

class Student{
protected:
    int roll;

public:
    void setroll(int a){
        roll = a;
    }
    void print(){
        cout << "Roll no is " << roll << endl;
    }
};

class Test : virtual public Student{
protected:
    float maths, physics;

public:
    void setmarks(float a, float b){
        maths = a;
        physics = b;
    }
    void printMarks(){
        cout << "Marks are " << maths << " " << physics << endl;
    }
};

class Sports : virtual public Student{
protected:
    float score;

public:
    void setScore(float a){
        score = a;
    }
    void printScore(){
        cout << "Sports is " << score << endl;
    }
};

class Result : public Test, public Sports{
private:
    float total;

public:
    void display(){
        total = maths + physics + score;
        print();
        printMarks();
        printScore();
        cout << "Total Score is " << score << endl;
    }
};

int main(){
    Result harry;
    harry.setroll(201210040);
    harry.setmarks(98.6, 99.4);
    harry.setScore(78.4);
    harry.display();
    return 0;
}