#include <iostream>
#include "Account.h"

using namespace std;

Account::Account(double amount)
{
    this->amount = amount;
}

double Account::getAmount() const
{
    return this->amount;
}

void Account::display() const
{
    cout << "Your account has an amount of: $" << this->amount << endl;
    return;
}

Account::~Account()
{
    cout << "Destructutor called for your account" << endl;
    // std::cout << "Destructutor called for your account" << std::endl; IF using namespace std was not inserted
}