#include <iostream>
using namespace std;

class Number {
public:
    void divisors() {
        int n;
        cout << "Enter a number: ";
        cin >> n;

        cout << "Divisors of " << n << " are:\n";
        for (int i = 1; i <= n; ++i) {
            if (n % i == 0) {
                cout << i << endl;
            }
        }
    }
};

int main() {
    Number obj;
    obj.divisors();

    return 0;
}
