#ifndef TRANSACTION_H
#define TRANSACTION_H

class Transaction
{
    int m_day;
    double m_amount;
    int m_stringholder;//////////////
   // std::string description;

public:
    Transaction(int day, double amount, int m_stringholder);///////////
    int get_day();
    double get_amount(); 
    int get_stringholder();//////////////
};

#endif
