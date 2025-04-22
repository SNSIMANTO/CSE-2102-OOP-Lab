//program 3*3=9 ta practice    accessable capability  (public-protected-private)
#include<iostream>
using namespace std;
class state
{
public:
    state()
    {
        cout<<"This is state university"<<endl;

    }
};
class Dept  :  public state{

};
int main()
{
    Dept obj;
    return 0;
}


