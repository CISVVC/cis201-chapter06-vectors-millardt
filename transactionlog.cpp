#include<iostream>
#include"transactionlog.h"

const int MONTH_SIZE = 30;

void Transactionlog::add_transaction(const Transaction &transaction)
{
    m_transactions.push_back(transaction);
}

std::vector<double> Transactionlog::day_balances()
{
    std::vector<double> balances;
    double total = 0.0;
    double total_string = 0.0;
    for(int day=0;day < MONTH_SIZE; day++)
    {
        total = total + get_day_total(day+1);
        total_string = total + get_day_total(day+1);
        balances.push_back(total);
    }
    return balances;
}

double Transactionlog::get_day_total(int day)
{
    double total = 0.0;
    for(int i=0;i<m_transactions.size();i++)
    {
        if(m_transactions[i].get_day() ==day)
            total += m_transactions[i].get_amount();
    }

    return total;

}

double Transactionlog::get_string_total(int day)
{
    double total_string = 0.0;
    for(int i=0;i<m_transactions.size();i++)
    {
        if(m_transactions[i].get_day() ==day)
            total_string += m_transactions[i].get_stringholder();
    }

    return total_string;

}

double Transactionlog::get_average_balance(const std::vector<double> &balances)
{
    double total = 0.0;
    for (int i=0;i<balances.size();i++)
    {
        total += balances[i];
    }
    return total/balances.size();
}

////////////////////// 
double Transactionlog::get_total_balance(const std::vector<double> &balances)
{
    double total = 0.0;
    for (int i=0;i<balances.size();i++)
    {
        total = balances[i];
    }
    return total;
}

double Transactionlog::get_interest(const std::vector<double> &balances)
{
    double interest = 0.0;
    for (int i=0;i<balances.size();i++)
    {
        interest = balances[i];
    }
    return  interest *.005;
}

void Transactionlog::print_day_transactions(int day)
{
    for(int i=0;i<m_transactions.size();i++)
    {
        if(m_transactions[i].get_day() == day)
            std::cout <<  "Transaction on day: "<<  m_transactions[i].get_day() << " is $" << m_transactions[i].get_amount() << " Item: "  << m_transactions[i].get_stringholder() << std::endl;
    }
}

void Transactionlog::print_report_for_day()
{
    std::vector<double> balances = day_balances();

    for(int day=0;day < MONTH_SIZE;day++)
    {
        print_day_transactions(day+1);
        std::cout << "Date: " << day + 1 << std::endl << "balance = " << balances[day] << std::endl << std::endl;
    }
 
    std::cout << "Average day balance: " << get_average_balance(balances) << std::endl;
    std::cout << "Total  balance: " << get_total_balance(balances) << std::endl;
    std::cout << "Monthly interest is: " << get_interest(balances) << std::endl; 
    std::cout << "balance after interest is: " << get_interest(balances) +  get_total_balance(balances) << std::endl; 

}
