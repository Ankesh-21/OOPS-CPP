#include<iostream>
using namespace std;
class car{
private:
    int a = 0;
    int b = 0;
public:
    void setVal(int a,int b){
        this->a = a;
        this -> b = b;
    }
    void display(){
        cout<<"a = "<<a<<" and b= "<<b<<"\n";
    }
};

int main(){
    car* c = new car();
    // cout << c->a<<endl;
    c->setVal(2,4);
    c->display();

    delete c;
}