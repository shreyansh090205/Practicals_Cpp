#include<iostream>
using namespace std;
class Account
{
    protected:
        string name;
        int accNum;
        string typeOfAccount;
        double balance;
    public:
        Account(string n, int an,string t, double b ): name(n), accNum(an), typeOfAccount(t), balance(b){}

        void deposit(double amount)
        {
            if (amount > 0)
            {
                balance+=amount;
                cout<<"Deposit successful. New Balance: "<<balance<<endl;
            }else{
                cout<<"Invalid deposit amount."<<endl;
            }
        }
        void displayBalance()const
        {
            cout<<"Account Balance: "<<balance<<endl;
        }
        virtual void computeAndDepositInterest() = 0;
        virtual void withdraw(double amount) = 0;
};
class cur_acct: public Account
{
    private:
    const double minBalance = 1000.0; // Minimum balance requirement
    const double penalty = 50.0;     // Penalty for not maintaining minimum balance

public:
    cur_acct(string name, int accNumber, double initialBalance)
        : Account(name, accNumber, "Current", initialBalance) {}

    void computeAndDepositInterest() override {
        // Current accounts do not accrue interest
        cout << "No interest applicable for current account.\n";
    }

    void withdraw(double amount) override {
        if (amount > balance) {
            cout << "Insufficient balance.\n";
        } else {
            balance -= amount;
            cout << "Withdrawal successful. New balance: " << balance << endl;

            // Check and impose penalty if minimum balance is not maintained
            if (balance < minBalance) {
                balance -= penalty;
                cout << "Penalty of " << penalty << " imposed for not maintaining minimum balance. New balance: " << balance << endl;
            }
        }
    }

};
class sav_acct: public Account
{
    double interestRate;
    const double minBalance = 500.0;
    public:
        sav_acct(string n,int an, double b,double rate):Account(n,an,"Savings",b),interestRate(rate){}
        void computeAndDepositInterest()override
        {
            double interest = (balance * interestRate) / 100;
            balance+=interest;
            cout<<"Interest of "<<interest <<" added. New balance: "<< balance <<endl;
        }
        void withdraw ( double amount)override
        {
            if (amount>balance)
            {
                cout<<"Insufficient balance."<<endl;
            }else if (balance - amount < minBalance)
            {
                cout<<"Withdrawal denied. Minimum balance of "<<minBalance<<" must be maintained."<<endl;
            }else
            {
                balance -= amount;
                cout<<"Withdrawal successful. New balance: "<<balance<<endl;
            }
        }
};
int main()
{
    sav_acct savings("Alice", 12345, 1000.0, 5.0); // 5% interest rate
    cur_acct current("Bob", 67890, 2000.0);

    // Perform operations on savings account
    cout << "\nSavings Account Operations:\n";
    savings.displayBalance();
    savings.deposit(500.0);
    savings.computeAndDepositInterest();
    savings.withdraw(800.0);
    savings.withdraw(200.0);

    // Perform operations on current account
    cout << "\nCurrent Account Operations:\n";
    current.displayBalance();
    current.deposit(1000.0);
    current.computeAndDepositInterest();
    current.withdraw(2500.0);
    current.withdraw(500.0);

    return 0;
}