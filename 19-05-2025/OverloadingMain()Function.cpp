#include<iostream>
using namespace std;
class Simanto
{
public:
    int main(int x)
    {
        cout<< x << "\n";
        return 0;
    }
    int main(char *x)
    {
        cout<< x <<endl;
        return 0;
    }
    int main(int x,int m)
    {
        cout<<x<< "  "<<m<<endl;
        return 0;
    }
};
int main()
{
    Simanto obj;
    obj.main(3);
    obj.main("I love Ema");
    obj.main(9,4);
    return 0;
}
