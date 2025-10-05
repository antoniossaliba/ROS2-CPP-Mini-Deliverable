#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
public:
    Account(double amount);
    double getAmount() const;
    void display() const;
    ~Account();

private:
    double amount;
};

#endif