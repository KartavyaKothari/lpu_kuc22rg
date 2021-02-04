#include<bits/stdc++.h>
using namespace std;

class Account{
    int acc_num;
    string pass;
    int balance;
    int num_trasac;

    bool check_pass(){
        string p;
        cout<<"Please enter password: ";
        cin>>p;
        if(p == pass){
            return true;
        }else {
            cout<<"Sorry wrong password"<<endl;
            return false;
        }
    }

    // bool is_transaction_limit_reached(){
    //     num_trasac++;

    //     if(num_trasac>=50){
    //         cout<<"Sorry transaction limits reached";
    //         return true;
    //     }

    //     return false;
    // }

    public:
    Account(int acc){
        acc_num = acc;
        balance = 100;
        num_trasac = 0;
        pass = "pass@123";
    }

    void check_balance(){
        if(!check_pass()) return;
        
        cout<<"Your account has "<<balance<<" rupees"<<endl;
    }

    void withdraw_money(int amt){
        if(!check_pass())
            return;
        
        if(amt>balance){
            cout<<"Sorry not enough funds!, try a lower amount"<<endl;
            return;
        }

        // if(is_transaction_limit_reached()){
        //     return;
        // }
        
        balance = balance - amt;
        cout<<"Withdraw successfull, balance left is "<<balance<<" rupees"<<endl;
    }

    void add_money(int amt){
        if(!check_pass())
           return;

        // if(is_transaction_limit_reached()){
        //     return;
        // }

        balance = balance + amt;
        cout<<"Adding money successfull, balance is "<<balance<<" rupees"<<endl;
    }
};

int main(){
    // Withdraw money
    // Add money
    // Check balance
    
    // Transaction history
    // change password
    // Fund transfer

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

    p1.check_balance();
    p1.add_money(100);
    p1.add_money(100);
    p1.withdraw_money(57);
    p1.check_balance();
    p1.add_money(100);
    p1.withdraw_money(57);
    p1.add_money(100);
    p1.withdraw_money(57);

    return 0;
}