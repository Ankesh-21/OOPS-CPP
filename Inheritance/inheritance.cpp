#include<iostream>
using namespace std;

class Person{
public:
    string name;
    int age;
    Person(){

    }
};
class Student: public Person{
public:
    string rollNo;
    void getInfo(){
        cout << this -> name<<"\n";
        cout << this -> age << "\n";
        cout << this -> rollNo << "\n";
    }
    ~Student(){
        cout << "I am destructor of Student \n";
    }
};

int main(){
    Student *s = new Student();
    s -> name = "Ankesh Hatui";
    s -> age = 24;
    s -> rollNo = "2022ITB040";
    s -> getInfo();
    delete s;
}