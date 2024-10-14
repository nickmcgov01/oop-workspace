#include "Financial_Records.h"

Financial_Records::Financial_Records(double initial_balance)
    : total_balance(initial_balance), total_expenses(0.0) {}

void Financial_Records::record_income(double amount) {
    total_balance += amount;
}

void Financial_Records::record_expenses(double amount) {
    total_expenses += amount;
    total_balance -= amount;
}

double Financial_Records::get_balance() const {
    return total_balance;
}
