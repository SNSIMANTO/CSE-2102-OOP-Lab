#include<iostream>
using namespace std;
class A
{
private:
    int x=5;
    friend class B;
};
class B
{
private:
    A obj;
    int p= obj.x;
public:
    void display()
    {
        cout<<p<<endl;
    }
};
int main()
{
    A a;
    B b;
    b.display();
    return 0;
}
