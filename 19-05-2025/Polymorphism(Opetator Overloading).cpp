#include<iostream>
using namespace std;
class Simanto
{
private:
    int Ema;
public:
    Simanto():Ema(8){}
    void operator ++()
    {
        Ema=Ema+2;
    }
    void Print()
    {
        cout<<"The Count is:"<<Ema<<endl;
    }
};
int main()
{
    Simanto obj;
    ++obj;
    obj.Print();
    return 0;
}
