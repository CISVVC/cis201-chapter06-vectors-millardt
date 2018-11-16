#include<iostream>
#include"transactionlog.h"

const int MONTH_SIZE = 30;
void Transactionlog::add_transaction(const Transaction &transaction)
{
    m_transactions.push_back(transaction);
}

/*
void Transactionlog::print_statement()
{
    
    for (int day = 0; day !=day_balances.size();++day)
    {
        std::cout << day_balances[day] << std::endl;
    }

    std::cout << std::endl;

    for (int i =0; i < transactions.size(); i++)
    {
        std::cout << "Day: " << transactions[i].get_day() << "   ";
        std::cout << transactions[i].get_transaction() << "   ";
        //std::cout << transactions[i].get_description ()<< std::endl;
        std::cout << "Total: " << day_balance[i] << std::endl;
    }
}
*/

std::vector<double> Transactionlog::day_balances()
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

double Transactionlog::get_day_total(int day)
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
        if(m_transactions[i].get_day() == day)
            std::cout << m_transactions[i].get_day() << "  " << m_transactions[i].get_amount() << std::endl;
    }
}


void Transactionlog::print_report_for_day()
{
    std::vector<double> balances = day_balances();

    for(int day=0;day < MONTH_SIZE;day++)
    {
        print_day_transactions(day+1);
        std::cout << "Date" << day + 1 << "balance = " << balances[day] << std::endl;
    }

    std::cout << "Average day balance: " << get_average_balance(balances) << std::endl;
}
