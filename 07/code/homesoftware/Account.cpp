// Account.cpp is the Account class function implementation file.
#include "Account.h"

bool Account::withdraw(double amount) {
    if (balance < amount)
        return false;
    else {
        balance -= amount;
        transactions++;
        return true;
    }
}