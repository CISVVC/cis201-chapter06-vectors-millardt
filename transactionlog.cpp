#include<iostream>
#include"transactionlog.h"

const int MONTH_SIZE = 30;
void Transactionlog::add_transaction(const Transaction &transaction)
{
    m_transactions.push_back(transaction);
}

std::vector<int> Transactionlog::day_balances()
{
    std::vector<double> balances;
    double total = 0;
    for(int day=0;day < MONTH_SIZE; day++)
    {
        total = total + get_day_total(day+1);
        balances.push_back(total);
    }
    return balances;
}

int Transactionlog::get_day_total(int day)
{
    double total = 0;
    for(int i=0;i<m_transactions.size();i++)
    {
        if(m_transactions[i].get_day() ==day)
            total += m_transactions[i].get_amount();
    }

    return total;

}

double Transactionlog::get_average_balance(const std::vector<double> &balances)
{
    double total = 0;
    for (int i=0;i<balances.size();i++)
    {
        total += balances[i];
    }
    return total/balances.size();
}

void Transactionlog::print_day_transactions(int day)
{
    for(int i=0;i<m_transactions.size();i++)
    {
        if(m_transactions[i].get_day == day)
            std:cout << m_transactions[i].get_day() << "  " << m_transactions[i].get_amount() << std::endl;
    }
}


void transactionlog::print_report_for_day()
{
    std::vector<double> balances = day_balances();
    for(int day=0;day < MONTH_SIZE;day++)
    {
        print_day_transactions(day+1)
        std::cout << "Date" day + 1 << "balance = " << balances[day] << std::endl;
    }

    std::cout << "Average day balance: " << get_average_balance(balances) << std::endl;
}
