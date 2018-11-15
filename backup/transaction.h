#ifndef TRANSACTION_H
#define TRANSACTION_H

class Transaction
{
    int m_day
    double m_amount;

public:
    Transaction(int day, int amount);
    int get_day();
    double get_amount();
    void print();
}

#endif
