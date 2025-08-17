#include<iostream>
using namespace std;
// This shape abstract class is not pure 
// so we can create a object
/*
class shape{
public:
    void introduce(){
        cout<<"I am from shape\n";
    }
    virtual void draw(){
        cout<<"This is not purely virtual\n";
    }
    virtual ~shape(){}
};
*/

// this has a pure virtual as well as a not virtual function
// a class becomes abstract and cannot be instantiated if it has at least one pure virtual function (= 0).
class shape{
public:
    void introduce(){
        cout<<"I am from shape\n";
    }
    virtual void draw() = 0;
    virtual ~shape(){}
};

class circle:public shape{
    void draw(){
        cout<<"I am a circle\n";
    }
};

class rectangle:public shape{
    void draw(){
        cout<<"I am a rectangle\n";
    }
};
int main(){
    shape *sh = new shape();
    sh -> draw();
    shape* shape1 = new circle();
    shape1->draw();
}