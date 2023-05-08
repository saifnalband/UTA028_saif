#include <iostream>
#include <vector>
#include <memory>

class Account {
public:
    virtual double calculateInterest() = 0;
    virtual ~Account() {}
    double getBalance() const {
        return balance;
    }
    void setBalance(double newBalance) {
        balance = newBalance;
    }
protected:
    double balance = 0.0;
};

class SavingsAccount : public Account {
public:
    double calculateInterest() override {
        return balance * 0.02; // 2% interest rate
    }
    SavingsAccount(double balance) {
        this->balance = balance;
    }
};

class CheckingAccount : public Account {
public:
    double calculateInterest() override {
        return balance * 0.01; // 1% interest rate
    }
    CheckingAccount(double balance) {
        this->balance = balance;
    }
};

class CreditCardAccount : public Account {
public:
    double calculateInterest() override {
        return balance * 0.05; // 5% interest rate
    }
    CreditCardAccount(double balance, double overdraftLimit) {
        this->balance = balance;
        this->overdraftLimit = overdraftLimit;
    }
private:
    double overdraftLimit = 0.0;
};

SavingsAccount operator+(const SavingsAccount& lhs, const CheckingAccount& rhs) {
    SavingsAccount result(lhs.getBalance() + rhs.getBalance());
    return result;
}

CheckingAccount operator+(const CheckingAccount& lhs, const SavingsAccount& rhs) {
    CheckingAccount result(lhs.getBalance() + rhs.getBalance());
    return result;
}

int main() {
    std::vector<std::unique_ptr<Account>> accounts;
    accounts.emplace_back(std::make_unique<SavingsAccount>(1000.0));
    accounts.emplace_back(std::make_unique<CheckingAccount>(2000.0));
    for (const auto& account : accounts) {
        std::cout << "Interest earned: " << account->calculateInterest() << std::endl;
    }
    Account* accountPtr = new SavingsAccount(500.0);
    accountPtr->calculateInterest(); // calls SavingsAccount::calculateInterest()
    delete accountPtr;
    return 0;
}
