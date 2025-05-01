#include<iostream>
#include<string>
using namespace std;
class state
{
 public:
     string name;
     int id;
     void University()
     {
         cout<<"The name of the university is:"<<name<<endl;
     }
};

int main()
{
   state obj;
   obj.name="  State University of Bangladesh";
   obj.University();
}
