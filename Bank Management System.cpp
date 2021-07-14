// BANK MANAGEMENT PROJECT
#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<bits/stdc++.h>
using namespace std;

class Bank
{
private:
    char name[100],address[100],val;
    int balance;
public:
    void open_account();
    void deposit_money();
    void withdraw_money();
    void display_account();
};

void Bank::open_account()
{
    cout<<"Enter your Full Name : ";
    cin.ignore();     //clears buffer
    cin.getline(name,100);
    cout<<"Enter your Address : ";
    cin.ignore();     //clears buffer
    cin.getline(address,100);
    cout<<"What type of account do you want to open?"<<endl;
    cout<<"1. Saving (s) "<<endl;
    cout<<"2. Current (c) "<<endl;
    cin>>val;
    cout<<"Enter the amount you want to deposit : ";
    cin>>balance;
    cout<<"Your account has been created successfully!!"<<endl;
}

void Bank::deposit_money()
{
    int amount;
    cout<<"Enter the amount you want to deposit : ";
    cin>>amount;
    balance+=amount;
    cout<<"Total Balance is : "<<balance<<endl;
}

void Bank::display_account()
{
    cout<<"Full Name : "<<name<<endl;
    cout<<"Address : "<<address<<endl;
    cout<<"Account Type : "<<val<<endl;
    cout<<"Total Amount : "<<balance<<endl;
}

void Bank::withdraw_money()
{
    float withdrawamt;
    cout<<"Withdraw:--"<<endl;
    cout<<"Enter the amount, you want to withdraw : ";
    cin>>withdrawamt;
    if(withdrawamt>balance){
        cout<<"Not enough amount in the account."<<endl;
        cout<<"Your request can't be processed."<<endl;
        exit(0);
    }
    balance-=withdrawamt;
    cout<<"Total amount left : "<<balance<<endl;
}

int main()
{
   // ios_base::sync_with_stdio(false);
   // cin.tie(NULL);

    int option;
    Bank obj;
    char choice;
    do{
        cout<<"1. Open Account "<<endl;
        cout<<"2. Deposit Money "<<endl;
        cout<<"3. Withdraw Money "<<endl;
        cout<<"4. Display Account "<<endl;
        cout<<"5. Exit "<<endl;
        cout<<"Select an option!"<<endl;
        cin>>option;
        system("cls");
        switch(option)
        {
            case 1:
                cout<<"1. Open Account"<<endl;
                obj.open_account();
                break;
            case 2:
                cout<<"2. Deposit Money"<<endl;
                obj.deposit_money();
                break;
            case 3:
                cout<<"3. Withdraw Money"<<endl;
                obj.withdraw_money();
                break;
            case 4:
                cout<<"4. Display Account"<<endl;
                obj.display_account();
                break;
            case 5:
                if(option==5){
                    exit(1);
                }
            default:
                cout<<"Invalid Selection"<<endl;
        }
        cout<<"\n Do you want to select other option? If yes, then press : y \n";
        cout<<"\n If you want to exit, then press : N \n";
        choice=getch();
        if(choice=='n' || choice=='N'){
            exit(0);
        }
    } while(choice=='y' || choice=='Y');
    getch();
    return 0;
}
