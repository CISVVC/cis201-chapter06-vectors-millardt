#include <iostream>
#include"transaction.h"

Transaction::Transaction(int day, double amount)
{
    m_day = day;
    m_amount = amount;
}

int Transaction::Transaction(get_day)
{
    return m_day;
}

int Transaction::get_amount()
{
    return m_amount;
}

void Transaction::print()
{
    std::cout << "Day turnout " << m_day << " is " << m_amount << std::endl;
}
