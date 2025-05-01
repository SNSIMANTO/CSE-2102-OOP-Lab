//scope resulation operator

#include<iostream>
#include<string>
using namespace std;
class Meghla
{
public:
    string name="Mollika";
    int  age=27;
    void printNameAge();
};
void Meghla::printNameAge(){
cout<<name<<age<<endl;
cout<<"hi"<<endl;
}
int main()
{
    Meghla obj;
    obj.printNameAge();
}
