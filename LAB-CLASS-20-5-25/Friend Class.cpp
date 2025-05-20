//if we don't declare a particular access modifier it will automatically it will be private.

#include<iostream>
using namespace std;
class A
{
    int x=5;
    friend class B;
};
class B
{
public:
    void display(A &a)  //the code will run without & too.
    {
        cout<< "The value of x is:" <<a.x<<endl;
    }
};
int main()
{
    A a;
    B b;
    b.display(a);
    return 0;
}
