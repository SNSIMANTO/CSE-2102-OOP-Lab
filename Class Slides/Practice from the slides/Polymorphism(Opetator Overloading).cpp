#include<iostream>
using namespace std;
class Simanto
{
private:
    int num;
public:
    Simanto():num(8){}
    void operator ++()
    {
        num=num+2;
    }
    void Print()
    {
        cout<<"The Count is:"<<num<<endl;
    }
};
int main()
{
    Simanto obj;
    ++obj;
    obj.Print();
    return 0;
}
