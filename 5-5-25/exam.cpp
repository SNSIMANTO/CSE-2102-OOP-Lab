//length
//converting number
#include<iostream>
using namespace std;
class Summation
{
public:

void process()
{
    int sum=0;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        char c=s[i];
        int n=int(c)-48;
        sum=sum+n;
    }
    cout<<sum<<endl;
}
};
int main()
{
    Summation ob;
    ob.process();
};

