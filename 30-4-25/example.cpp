#include<iostream>
using namespace std;
class CPP{
private:
    int invention_year;
    string invented_country;
public:
    CPP(int y, string c){
        invention_year = y;
        invented_country = c;
        cout<<"Invention Year: "<<invention_year<<endl;
        cout<<"Invented Country: "<<invented_country<<endl;
    }
};
class PYTHON{
private:
    int invention_year;
    string invented_country;
public:
    PYTHON(int y, string c){
        invention_year = y;
        invented_country = c;
        cout<<"Invention Year: "<<invention_year<<endl;
        cout<<"Invented Country: "<<invented_country<<endl;
    }
};

class JAVA: public CPP, public PYTHON{
    private:
        int invention_year;
        string invented_country;
    public:
        JAVA(int y, string c): CPP(y, c), PYTHON(y, c){
            invention_year = y;
            invented_country = c;
            cout<<"Invention Year: "<<invention_year<<endl;
            cout<<"Invented Country: "<<invented_country<<endl;
        }
};
int main(){
    JAVA obj(2025, "Bangladesh");
    return 0;
}
