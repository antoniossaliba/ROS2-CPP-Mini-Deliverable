#include <iostream>
#include "SavingsAccount.h"
#include "Account.h"

using namespace std;

SavingsAccount::SavingsAccount(double amount, double interestRate) : Account(amount), interestRate(interestRate) {}

double SavingsAccount::getInterestRate() const
{
    return interestRate;
}

void SavingsAccount::display() const
{
    cout << "Your amount: $" << this->getAmount() << endl;
    cout << "Your interest rate: " << this->getInterestRate() << endl;
    return;
}

SavingsAccount::~SavingsAccount()
{
    cout << "Destructor called for savings account" << endl;
    return;
}