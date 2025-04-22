#include<iostream>
#include<conio.h>
using namespace std;
class State{
public:
    string name="Simanto"; int id= 1234;
    void  print(){
    cout<<"I am a student of CSE department"<<endl;

    }
};
class Dept:public State{
public:
    void display(){
    cout<<"Name: "<<name<<endl<<"ID:"<<id<<endl;
    }
};

int main()
{
    Dept obj;
    obj.display();
    obj.print();


    getch();
}
