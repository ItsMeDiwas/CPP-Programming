#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>

class Account
{
public:
    double balance;
    std::string name;
    void deposit(double amount);
    void withdraw(double amount);
    Account();
    ~Account();
};

#endif // _ACCOUNT_H_
