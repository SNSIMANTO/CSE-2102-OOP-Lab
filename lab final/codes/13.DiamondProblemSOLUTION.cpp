#include<iostream>
using namespace std;

class rahat {
public:
    rahat() {
        cout << "student" << endl;
    }
};

class atiq : virtual public rahat {
public:
    atiq() {
        cout << "Man" << endl;
    }
};

class simanto : virtual public rahat {
public:
    simanto() {
        cout << "Good student" << endl;
    }
};

class monir : public atiq, public simanto {
public:
    monir() {
        cout << "amr vhul hoyeche" << endl;
    }
};

int main() {
    monir h;
    return 0;
}
