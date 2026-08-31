#include <iostream>
#include <string>
using namespace std;

// Base class
class Account {
protected:
    string name;
    int accountNo;
    double balance;

public:
    void createAccount() {
        cout << "Enter account holder name: ";
        cin >> name;

        cout << "Enter account number: ";
        cin >> accountNo;

        cout << "Enter initial balance: ";
        cin >> balance;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Amount deposited successfully.\n";
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Amount withdrawn successfully.\n";
        } else {
            cout << "Insufficient balance!\n";
        }
    }

    void statement() {
        cout << "\n----- Account Statement -----\n";
        cout << "Account Holder: " << name << endl;
        cout << "Account Number: " << accountNo << endl;
        cout << "Balance: " << balance << endl;
    }
};

// Saving Account
class SavingAccount : public Account {
public:
    void addInterest() {
        double interest = balance * 0.04;
        balance += interest;

        cout << "Interest added: " << interest << endl;
    }
};

// Checking Account
class CheckingAccount : public Account {
public:
    void withdraw(double amount) {
        if (amount <= balance + 1000) {
            balance -= amount;
            cout << "Amount withdrawn successfully.\n";
        } else {
            cout << "Withdrawal limit exceeded!\n";
        }
    }
};

int main() {
    SavingAccount saving;
    CheckingAccount checking;

    cout << "===== SAVING ACCOUNT =====\n";
    saving.createAccount();

    saving.deposit(2000);
    saving.withdraw(500);
    saving.addInterest();
    saving.statement();

    cout << "\n===== CHECKING ACCOUNT =====\n";
    checking.createAccount();

    checking.deposit(3000);
    checking.withdraw(4000);
    checking.statement();

    return 0;
}