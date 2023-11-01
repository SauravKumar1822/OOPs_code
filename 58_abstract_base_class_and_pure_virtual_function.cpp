#include <bits/stdc++.h>
using namespace std;

class CWH{
    protected:
        string title;
        float rating;

    public:
        CWH(string s, float r){
            title = s;
            rating = r;
        }
        virtual void display() = 0; // do nothing function (pure virtual function)
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