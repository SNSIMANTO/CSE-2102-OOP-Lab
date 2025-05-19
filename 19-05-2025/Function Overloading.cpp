#include<iostream>
using namespace std;
class Sima
{
public:
    void Ema(int x)
    {
        cout<<"The value of X is: "<<x<<endl;
    }
    void Ema(double x)
    {
        cout<<"The value of X is: "<<x<<endl;
    }
    void Ema(int x,double y)
    {
        cout<<"The value of X is: "<<x<<" , "<<y<<endl;
    }
};
int main()
{
    Sima ob;
    ob.Ema(5);
    ob.Ema(10.5);
    ob.Ema(2,5);
    ob.Ema(3,'A');
    return 0;
}
