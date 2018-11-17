#include <iostream>
#include"transaction.h"

Transaction::Transaction(int day, double amount, int stringholder/*TEMPORARYSTUFFFFFFF*/ )
{
    m_day = day;
    m_amount = amount;
    m_stringholder = stringholder;////////////////
}

int Transaction::get_day()
{
    return m_day;
}

double Transaction::get_amount()
{
    return m_amount;
}

int Transaction::get_stringholder()///////////
{
    return m_stringholder;
}
