/*
Rules:
    1. they cant be static
    2. they are accessed by object pointers
    3. virtual functions can be friend of another class
    4. a function in base class can might not be used
    5. if a virtual function defined in a base class, there is no necessity of redefining it in a derived class
*/

#include <bits/stdc++.h>
using namespace std;

class CWH{
    protected:
        string title;
        float rating;

    public:
        CWH(string s, float r)
        {
            title = s;
            rating = r;
        }
        virtual void display() {}
};

class Video : public CWH{
        int vidLen;
    public:
        Video(string s, float r, int len) : CWH(s, r){
            vidLen = len;
        }

        void display(){
            cout << "video" << endl;
            cout << title << " " << rating << " " << vidLen << endl
                << endl;
        }
};

class Text : public CWH{
        int words;
    public:
        Text(string s, float r, int len) : CWH(s, r){
            words = len;
        }

        void display(){
            cout << "text" << endl;
            cout << title << " " << rating << " " << words << endl
                << endl;
        }
};

int main(){
    Video vobj("Django", 4.56, 300);
    Text tobj("Javascript", 4.78, 430);
    CWH *tuts[2];

    tuts[0] = &vobj;
    tuts[1] = &tobj;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}