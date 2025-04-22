#include<iostream>
using namespace std;
class Vehicle{
public:
    Vehicle()
    {
        cout<<"This is vehicle"<<endl;
    }
    };
    class FourWheeler{
public:
    FourWheeler()
    {
        cout<<"This is FourWheeler Vehicle"<<endl;
    }
    };
class Car:public Vehicle,public FourWheeler{
};
int main()
{
    Car obj;
    return 0;
}
