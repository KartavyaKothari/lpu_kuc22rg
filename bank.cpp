#include<bits/stdc++.h>
using namespace std;

struct transaction{
    bool is_deposit;
    int amt;
};

class Account{
    int acc_num;
    string pass;
    int balance;
    int num_trasac;

    struct transaction history[100];
    int last_transac;

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
    // Account(int acc):
    //     acc_num(acc),
    //     balance(100),
    //     num_trasac(0),
    //     pass("pass@123"),
    //     last_transac(-1)
    // {}
    Account(int acc){
        acc_num = acc;
        balance = 100;
        num_trasac = 0;
        pass = "pass@123";
        last_transac = -1;
    }

    // Implemented outside the class
    void change_pass();

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

        last_transac++;
        history[last_transac] = {false,amt};
        
        balance = balance - amt;
        cout<<"Withdraw successfull, balance left is "<<balance<<" rupees"<<endl;
    }

    void add_money(int amt){
        if(!check_pass())
           return;

        // if(is_transaction_limit_reached()){
        //     return;
        // }

        last_transac++;
        history[last_transac] = {true,amt};

        balance = balance + amt;
        cout<<"Adding money successfull, balance is "<<balance<<" rupees"<<endl;
    }

    void update_passbook(){
        cout<<"***********Transaction history*************"<<endl;
        for(int i = 0 ; i <= last_transac ; i++){
            if(history[i].is_deposit){
                cout<<"Deposited "<<history[i].amt<<" rupees"<<endl;
            }else{
                cout<<"Withdrew "<<history[i].amt<<" rupees"<<endl;
            }
        }
        cout<<"************************"<<endl;
    }
};

void Account::change_pass(){
    if(!check_pass())
        return;
    
    cout<<"Enter new password: ";
    cin>>pass;
}

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

    while(true){
        cout<<"1. Withdraw money"<<endl;
        cout<<"2. Deposit money"<<endl;
        cout<<"3. Print transaction history"<<endl;
        cout<<"4. Check balance"<<endl;
        cout<<"5. Change password"<<endl;
        cout<<"6. Exit"<<endl;

        cout<<"Enter option: ";

        int res,amt;
        cin>>res;

        switch (res){
            case 1:
                cout<<"Enter amt: ";
                cin>>amt;
                p1.withdraw_money(amt);
                break;
            case 2:
                cout<<"Enter amt: ";
                cin>>amt;
                p1.add_money(amt);
                break;
            case 3:
                p1.update_passbook();
                break;
            case 4:
                p1.check_balance();
                break;
            case 5:
                p1.change_pass();
                break;
            case 6:
                return 0;
        }
    }

    // p1.check_balance();
    // p1.add_money(100);
    // p1.add_money(100);
    // p1.withdraw_money(57);
    // p1.check_balance();
    // p1.add_money(100);
    // p1.withdraw_money(57);
    // p1.add_money(100);
    // p1.withdraw_money(57);
    // p1.update_passbook();

    return 0;
}