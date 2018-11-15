#ifndef TRANSACTIONLOG_H
#define TRANSACTIONLOG_H
#include<vector>
#include "transaction.h"

class Transactionlog
{
    std::vector<Transaction> m_transactions;

public:
    void add_transaction(const Transaction &t);
   // double day_balances();
    void print_statement();
   
    double get_day_total(int day);
    void print_report_for_day();
    void print_day_transactions(int day);
    double get_average_balance(const std::vector<double> &balances);
};

#endif
