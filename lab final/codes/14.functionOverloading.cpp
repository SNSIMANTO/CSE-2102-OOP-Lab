// Polymorphism(many forms)
// 1.abc+syz=abcxyz (concatenation)  2. 10+20=30 (addition)
// there are two types of polymorphism i)Static/compile ii)Dynamic/Run time
//function: return type,function name(){}
// while compiling a code compiler will chick i.number of paramiter ii.Data type of the paramiter
#include<iostream>
using namespace std;
class University
{
public:
    void func(int a)
    {
        cout<<"Value of a is: "<<a<<endl;
    }
    void func(double a)
    {
        cout<<"Value of a is: "<<a<<endl;
    }
    void func(int a, int b)
    {
        cout<<"Value of a is: "<<a<<endl;
        cout<<"Value of b is: "<<b<<endl;
    }
};
int main()
{
    University obj;
    obj.func(2);
    obj.func(2);
    obj.func(3,8);
    obj.func(21,7.33);//type custing
}
