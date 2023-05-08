#include <iostream>
using namespace std;

class Account {
public:
    virtual double calculatelnterest();
    double getBalance() const { return balance; }
    void setBalance(double b) { balance = b; }
protected:
    double balance = 0.0;
};

class SavingsAccount : public Account {
public:
    double calculatelnterest() {
        // Calculation formula for savings account interest
        double rate = 0.05;
        return balance * rate;
    }
};

class CheckingAccount : public Account {
public:
    double calculatelnterest() {
        // Calculation formula for checking account interest
        double rate = 0.01;
        return balance * rate;
    }
};

class CreditCardAccount : public Account {
public:
    double calculatelnterest()  {
        // Calculation formula for credit card account interest
        double rate = 0.2;
        return balance * rate;
    }
};

// Overloading + operator for account balances
Account operator+(const Account& lhs, const Account& rhs) {
    Account result;
    result.setBalance(lhs.getBalance() + rhs.getBalance());
    return result;
}

// Demonstrating polymorphism with virtual function
void calculateInterestOnAccounts(Account** accounts, int count) {
    for (int i = 0; i < count; ++i) {
        std::cout << "Interest earned on account #" << i+1 << ": " << accounts[i]->calculatelnterest() << std::endl;
    }
}

// Demonstrating polymorphism with non-virtual function
void calculateInterestOnAccount(Account* account) {
    std::cout << "Interest earned on account: " << account->calculatelnterest() << std::endl;
}

int main() {
    // Creating instances of account types
    SavingsAccount savingsAccount;
    savingsAccount.setBalance(1000.0);

    CheckingAccount checkingAccount;
    checkingAccount.setBalance(2000.0);

    CreditCardAccount creditCardAccount;
    creditCardAccount.setBalance(-500.0);

    // Overloading + operator
    Account combinedAccount = savingsAccount + checkingAccount;
    std::cout << "Combined balance of savings and checking account: " << combinedAccount.getBalance() << std::endl;

    // Virtual function polymorphism
    Account* accounts[3] = { &savingsAccount, &checkingAccount, &creditCardAccount };
    calculateInterestOnAccounts(accounts, 3);

    // Non-virtual function polymorphism
    calculateInterestOnAccount(&savingsAccount);
    calculateInterestOnAccount(&checkingAccount);
    calculateInterestOnAccount(&creditCardAccount);

    return 0;
}
