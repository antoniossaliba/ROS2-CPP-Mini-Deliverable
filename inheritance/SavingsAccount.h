#include "Account.h"

#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

class SavingsAccount : public Account
{
public:
    SavingsAccount(double amount, double interestRate);
    double getInterestRate() const;
    void display() const;
    ~SavingsAccount();

private:
    double interestRate;
};

#endif