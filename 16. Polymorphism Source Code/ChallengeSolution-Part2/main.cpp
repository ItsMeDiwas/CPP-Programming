#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

int main() {
    
//    Account joe;
    //Checking_Account c;
    //cout << c << endl;
//   
//    Savings_Account s {"Frank", 5000, 2.6};
//    cout << s << endl;
//    s.deposit(10000);
//    cout << s << endl;
//    s.withdraw(10000);
//    cout << s << endl;
    
    
    Account *ptr = new Trust_Account("Leo", 10000, 2.6);
    cout << *ptr << endl;
        
        
//    Account frank{"Frank", 5000};         // should not compile
//    cout << frank << endl;

//    Checking_Account frank {"Frank", 5000};
//    cout << frank << endl;
//    
//    Account *trust = new Trust_Account("James");
//    cout << *trust << endl;
//    
//    Account *p1 = new Checking_Account("Larry", 10000);
//    Account *p2 = new Savings_Account("Moe", 1000);
//    Account *p3 = new Trust_Account("Curly");
//    
//    std::vector<Account *> accounts {p1,p2,p3};
//    
//    display(accounts);
//    deposit(accounts, 1000);
//    withdraw(accounts, 2000);
//    
//    display(accounts);
//    
//    delete p1;
//    delete p2;
//    delete p3;
    return 0;
}

