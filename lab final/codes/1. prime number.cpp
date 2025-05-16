#include<iostream>
using namespace std;

class prime
{
public:
    void check()
    {
        int num;
        cin>>num;

        int count = 0;
        for(int i = 1; i<=num; i++)
        {
            if(num%i == 0)
            {
                count++;
            }
        }
        if(count ==2)
        {
            cout<<"This is a prime number."<<endl;
        }
        else{
            cout<<"this is not a prime number."<<endl;
        }
    }
};
int main()
{
    prime obj;
    obj.check();

    return 0;
}

/*
#include<iostream>
#include<math.h>
using namespace std;
class Number{
public:
    int isPrime()
    {
        int n, flag=1;
        cin>>n;
        for(int i = 2; i <= sqrt(n); i++){
            if(n%i == 0){
                flag = 0;N
                break;

            }
        }
        return flag;
    }
};
int main()
{
    Number obj;
    if(obj.isPrime()==1){
        cout<<"Prime Number"<<endl;
    } else {
        cout<<"Not a Prime Number"<<endl;
    }
}
*/
