#include<iostream>
using namespace std;
class Bank
{
 private:
     string BankID;
     string BankName;
     string Location;

 public:
    Bank(string ID,string Name )
    {
        BankID= ID;
        BankName=Name;
    }
    void Print_Values1()
    {
        cout<<"BankID: "<<BankID<<endl;
        cout<<"BankName: "<<BankName<<endl;
    }

};

class Customer:public Bank
{
private:
    string CustomerID;
    double Amount;

public:
    Customer(string cid,double amt):Bank( "A0324","SUB BANK")
    {
        CustomerID=cid;
        Amount=amt;
    }
     void Print_Values2()
      {
          cout<<CustomerID<<endl;
          cout<<Amount<<endl;
      }
};
int main()
{
Customer obj("a50",251);
obj.Print_Values1();
obj.Print_Values2();
}
