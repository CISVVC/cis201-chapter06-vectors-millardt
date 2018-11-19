#ifndef TRANSACTION_H
#define TRANSACTION_H

class Transaction
{
    int m_day;
    double m_amount;
    int m_stringholder;//////////////
   // std::string description;

public:
    Transaction(int day, double amount, double stringholder);///////////
    int get_day();
    double get_amount(); 
    double get_stringholder();//////////////
};

#endif
