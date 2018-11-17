#include <vector>

#include "transaction.h"
#include "transactionlog.h"


void add_transactions(Transactionlog &tlog)
{
    tlog.add_transaction(Transaction( 1 , 5, 1001 )); //1 5
    tlog.add_transaction(Transaction( 2 , 10, 1002));
    tlog.add_transaction(Transaction( 3 , 15, 1003));
 /*   tlog.add_transaction(Transaction( 4 , 20 ));
    tlog.add_transaction(Transaction( 5 , 25 ));
    tlog.add_transaction(Transaction( 6 , 30 ));
    tlog.add_transaction(Transaction( 7 , 5 )); 
    tlog.add_transaction(Transaction( 8 , 5 ));
    tlog.add_transaction(Transaction( 9 , 10 ));
    tlog.add_transaction(Transaction( 10 , 15 ));*/ //10 140
/*    tlog.add_transaction(Transaction( 11 , 20 ));
    tlog.add_transaction(Transaction( 12 , 30 ));
    tlog.add_transaction(Transaction( 13 , 25 ));
    tlog.add_transaction(Transaction( 14 , 35 ));
    tlog.add_transaction(Transaction( 15 , 40 ));
    tlog.add_transaction(Transaction( 16 , 40 ));
    tlog.add_transaction(Transaction( 17 , 50 ));
    tlog.add_transaction(Transaction( 18 , 60 ));
    tlog.add_transaction(Transaction( 19 , 70 ));
    tlog.add_transaction(Transaction( 20 , 80 )); //20 450
    tlog.add_transaction(Transaction( 21 , 1 ));
    tlog.add_transaction(Transaction( 22 , 1 ));
    tlog.add_transaction(Transaction( 23 , 1 ));
    tlog.add_transaction(Transaction( 24 , 1 ));
    tlog.add_transaction(Transaction( 25 , 1 ));
    tlog.add_transaction(Transaction( 26 , 1 ));
    tlog.add_transaction(Transaction( 27 , 1 ));
    tlog.add_transaction(Transaction( 28 , 1 )); */
    tlog.add_transaction(Transaction( 29 , 1, 1004 ));
    tlog.add_transaction(Transaction( 30 , 1, 1005 )); //30 10
       
}


int main()
{
    Transactionlog tlog;
    add_transactions(tlog); 

    tlog.print_report_for_day();

    return 0;
}
