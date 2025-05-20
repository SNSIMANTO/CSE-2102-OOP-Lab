#include<iostream>
using namespace std;
class B;
class A
{
private:
    int numA;
public:
    A():numA(12){}
    friend int add(A,B);
};
class B
{
private:
    int numB;
public:
    B():numB(1){}
    friend int add (A,B);
};
int add(A objA,B objB)
{
    return(objA.numA + objB.numB);
}
int main()
{
    A objA;
    B objB;
    cout<<"Summation is : "<<add(objA,objB)<<endl;
    return 0;
}
