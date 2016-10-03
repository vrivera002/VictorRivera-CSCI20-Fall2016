//Victor Rivera
// 10/2/16
//This program has class ATM that creates an object that can be added and subtracted from, simulating (or trying to simulate) a real atm and bank account


#include <iostream>
using namespace std;

class ATM {
    public:
        ATM ();//default constructor, sets amount in account to zero
        ATM (double accountValue); //overload constructor
        void SetDepositMoney (double depositAmount);//adds amount deposited to amount in bank account
        void SetWithDrawMoney (double withdrawAmount);//subtracts amount from bank account
        void SetTransferMoney (double transferAMount);//subtracts amount from bank account
        double GetBankStatement ();//prints the amount of money owned in bank account
    
    private:
        double AmountInAccount;//variable everything gets added to or subtracted from
};

ATM :: ATM () {
    AmountInAccount = 0;
    return;
}

ATM :: ATM (double accountValue) {
    AmountInAccount = accountValue;
    return;
}

void ATM :: SetDepositMoney (double depositAmount) {
    if (depositAmount < 0) {
        cout << "error can only deposit a positive amount" << endl;
    }
    else AmountInAccount = depositAmount + AmountInAccount;
    return;
}

void ATM :: SetWithDrawMoney (double withdrawAmount) {
    
    if (withdrawAmount > AmountInAccount){//so no one can overdraw their bank account
        cout << "error insufficient funds" << endl;
        return;
    }
    
    else AmountInAccount = AmountInAccount - withdrawAmount;
}

void ATM :: SetTransferMoney (double transferAmount) {
    
    if (transferAmount > AmountInAccount) {//so no one can overdraw their bank account
        cout << "error insufficient funds" << endl;
        return;
    } else AmountInAccount = AmountInAccount - transferAmount;
        return;
}

double ATM :: GetBankStatement () {
    cout << "You have " << AmountInAccount << " dollars in your account" <<endl;
}
int main() {
    ATM Account1;
    
    Account1.SetDepositMoney (100);
    Account1.SetWithDrawMoney (20);
    Account1.GetBankStatement ();
    
    Account1.SetWithDrawMoney (60);
    Account1.SetWithDrawMoney (40);
    Account1.GetBankStatement ();
    
    Account1.SetDepositMoney (73);
    Account1.SetWithDrawMoney (40);
    Account1.GetBankStatement ();
    
    return 0;
}









