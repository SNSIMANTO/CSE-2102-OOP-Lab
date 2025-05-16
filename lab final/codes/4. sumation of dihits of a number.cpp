#include<iostream>
using namespace std;
class Number{
public:
    void calculations()
    {
        int n, r, sum = 0;
        cin>>n;
        while(n != 0){
            r = n%10;
            n = n/10;
            sum=sum+r;
           // sum += r;

        }
        cout<<sum<<endl;
    }
};

int main()
{
    Number obj;
    obj.calculations();
}
