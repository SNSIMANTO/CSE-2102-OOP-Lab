//descrive the diamond problem in OOP with the proper coding example (just using public)
//describe the solution of diamond problem in opp with proper coding example.(using vertual public)
#include<iostream>
using namespace std;

class rahat
{
public:
    rahat()
    {
        cout<<"student"<<endl;
    }
};
class atiq : public rahat
{
public:
    atiq()
    {
        cout<<"Man"<<endl;
    }
};
class simanto: public rahat
{
public:
    simanto()
    {
        cout<<"Good student"<<endl;
    }
};
class monir : public atiq , public simanto
{
public:

    monir()
    {
        cout<<"amr vhul hoyeche"<<endl;
    }
};
int main()
{
    monir h;

    return 0;
}
