#include<bits/stdc++.h>
using namespace std;

class Account{
    int acc_num;
    string pass;
    int balance;
    int num_trasac;

    public:
    Account(int acc){
        acc_num = acc;
        balance = 100;
        num_trasac = 0;
        pass = "pass@123";
    }

    bool check_pass(string p){
        if(p == pass){
            return true;
        }else return false;
    }

    void check_balance(string p){
        if(check_pass(p)){
            cout<<"Your account has "<<balance<<" rupees"<<endl;
        }else{
            cout<<"Sorry wrong password"<<endl;
        }
    }

    void withdraw_money(int amt,string p){
        if(check_pass(p)){
            if(amt>balance){
                cout<<"Sorry not enough funds!, try a lower amount"<<endl;
            }else{
                if(num_trasac>=5){
                    cout<<"Sorry transaction limits reached";
                    return;
                }
                num_trasac++;
                balance = balance - amt;
                cout<<"Withdraw successfull, balance left is "<<balance<<" rupees"<<endl;
            }
        }else{
            cout<<"Sorry wrong password"<<endl;
        }
    }

    void add_money(int amt, string p){
        if(check_pass(p)){
            if(num_trasac>=5){
                cout<<"Sorry transaction limits reached";
                return;
            }
            num_trasac++;
            balance = balance + amt;
            cout<<"Adding money successfull, balance is "<<balance<<" rupees"<<endl;
        }else{
            cout<<"Sorry wrong password"<<endl;
        }
    }
};

int main(){
    // Withdraw money
    // Add money
    // Check balance
    // Transaction history
    // change password
    // Fund transfer
    // Limit num of transactions

    // Account *p1 = new Account(1234);
    // p1->check_balance("pass@123");
    // p1->add_money(100,"pass@12");
    // p1->add_money(100,"pass@123");
    // p1->withdraw_money(57,"pass@123");
    // p1->check_balance("pass@123");
    // p1->add_money(100,"pass@123");
    // p1->withdraw_money(57,"pass@123");
    // p1->add_money(100,"pass@123");

    Account p1(1234);
    p1.check_balance("pass@123");
    p1.add_money(100,"pass@12");
    p1.add_money(100,"pass@123");
    p1.withdraw_money(57,"pass@123");
    p1.check_balance("pass@123");
    p1.add_money(100,"pass@123");
    p1.withdraw_money(57,"pass@123");
    p1.add_money(100,"pass@123");

    p1.withdraw_money(57,"pass@123");

    return 0;
}