#include <iostream>
#include <string>
using namespace std;

// Base class Bank
class Bank {
private:
    string BankID;
    string BankName;
    string Location;

public:
    // Constructor taking two parameters
    Bank(string id, string name) {
        BankID = id;
        BankName = name;
        Location = "Unknown"; // default value
    }

    // Function to print Bank details
    void Print_Values() {
        cout << "Bank ID: " << BankID << endl;
        cout << "Bank Name: " << BankName << endl;
        cout << "Location: " << Location << endl;
    }
};

// Derived class Customer inheriting from Bank
class Customer : public Bank {
private:
    string Customer_ID;
    double Amount;

public:
    // Constructor for Customer that also initializes Bank
    Customer(string bankID, string bankName, string custID, double amt)
        : Bank(bankID, bankName) {
        Customer_ID = custID;
        Amount = amt;
    }

    // Function to print Customer details
    void Print_Values2() {
        Print_Values();  // Call base class function
        cout << "Customer ID: " << Customer_ID << endl;
        cout << "Amount: " << Amount << endl;
    }
};

// Main function
int main() {
    Customer c("B001", "Global Bank", "C123", 5000.75);
    c.Print_Values2();
}
