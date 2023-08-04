#include <iostream>
#include<fstream>
#include<map>
using namespace std;

class InsufficientFunds{};
class Account
{
private:
    string FirstName;
    string LastName;
    int Balance;
    int accno;
    static int nextAccNo;
public:
    Account(){};
    Account(string f,string l,int b)
    {
        nextAccNo++;
        accno=nextAccNo;
        FirstName=f;
        LastName=l;
        Balance=b;
    }
    string getFirstName(){return FirstName;};
    string getLastName(){return LastName;};
    int getAccNO(){return accno;};
    int getBalance(){return Balance;};
    void deposit(int x);
    void withdraw(int x);
    static void setLastAccountNo(int ano);
    static int getLastAccountNo(){return nextAccNo;};
    friend ofstream & operator<<(ofstream & ofs,Account &x);
    friend ifstream & operator>>(ifstream & ifs,Account &x);
    friend ostream & operator<<(ostream & os,Account &x);
};
int Account::nextAccNo=0;
class Bank:public Account
{
private:
    map<int,Account> accounts;
public:
    Bank();
    Account OpenAccount(string f,string l,int balance);
    void DeleteAccount(int ano);
    Account Deposit(int ano,int amount);
    Account Withdraw(int ano,int amount);
    void showAllAccount();
    Account BalanceEnquiry(int ano);
    ~Bank();
};
int main()
{
    string f,l;
    int bal;
    Account acc;
    Bank b;
    int amount;
    int ano;
    int choice;
    do
    {
        cout << "********* Banking System  *********" << endl;
    cout<<"Choose an option by entering the serial number::"<<endl;
    cout<<"1.Create new account."<<endl;
    cout<<"2.Close account."<<endl;
    cout<<"3.Deposit Money in Account."<<endl;
    cout<<"4.Withdraw Money from Account."<<endl;
    cout<<"5.Balance Inquiry."<<endl;
    cout<<"6.Show all Accounts."<<endl;
    cout<<"7.Quit Application."<<endl;
    cout<<endl;
    cout<<"Enter your Choice: "<<endl;
    cin>>choice;
    switch(choice)
    {
    case 1:
        cout<<"Enter first name:"<<endl;
        cin>>f;
        cout<<"Enter Last name;"<<endl;
        cin>>l;
        cout<<"Enter Initial Balance:"<<endl;
        cin>>bal;
        acc=b.OpenAccount(f,l,bal);
        cout<<"Account created successfully."<<endl;
        cout<<acc;
        break;
    case 2:
        cout<<"Enter Account number to be deleted"<<endl;
        cin>>ano;
        b.DeleteAccount(ano);
        cout<<"Account Deleted Successfully"<<endl;
        cout<<acc;
        break;
    case 3:
        cout<<"Enter the Account number in which money is to be deposited:"<<endl;
        cin>>ano;
        cout<<"Enter the Amount to be deposited."<<endl;
        cin>>amount;
        acc=b.Deposit(ano,amount);
        cout<<"Amount Deposited Successfully."<<endl;
        cout<<acc;
        break;
    case 4:
        cout<<"Enter the Account number in which money is to be withdrwan:"<<endl;
        cin>>ano;
        cout<<"Enter the Amount to be withdrawn."<<endl;
        cin>>amount;
        acc=b.Withdraw(ano,amount);
        cout<<"Amount Withdrawn Successfully."<<endl;
        cout<<acc;
    break;
    case 5:
        cout<<"Enter the Account number for balance inquiry:"<<endl;
        cin>>ano;
        acc=b.BalanceEnquiry(ano);
        cout<<endl<<"Your Account Details."<<endl;
        cout<<acc;
        break;
    case 6:
        cout<<"All Account Details;"<<endl;
        b.showAllAccount();
        break;
    case 7:
        break;
    default:
        cout<<"Enter correct choice!!"<<endl;
        break;
    }

    }while(choice!=7);
    return 0;
}
void Account::deposit(int x)
{
    Balance+=x;
}
void Account::withdraw(int x)
{
    if(Balance-x<500)
    {
        throw InsufficientFunds();
    }
    Balance-=x;
}
void Account::setLastAccountNo(int ano)
{
    nextAccNo=ano;
}
ofstream & operator<<(ofstream &ofs,Account &x)
{
    ofs<<x.accno<<endl;
    ofs<<x.FirstName<<endl;
    ofs<<x.LastName<<endl;
    ofs<<x.Balance<<endl;
    return ofs;
}
ifstream & operator>>(ifstream &ifs,Account &x)
{
    ifs>>x.accno;
    ifs>>x.FirstName;
    ifs>>x.LastName;
    ifs>>x.Balance;
    return ifs;
}
ostream & operator<<(ostream & os,Account &x)
{
    os<<"Account number: "<<x.accno<<endl;
    os<<"First Name: "<<x.FirstName<<endl;
    os<<"Last Name: "<<x.LastName<<endl;
    os<<"Balance: "<<x.Balance<<endl;
    return os;
}

Bank::Bank()
{
    Account acc;
    ifstream infile("Bank.data");
    if(infile.eof())
    {
        return ;
    }
    else
    {
        infile>>acc;
        accounts.insert(pair<int,Account>(acc.getAccNO(),acc));
    }
    Account::setLastAccountNo(acc.getAccNO());
    infile.close();
}

Account Bank::OpenAccount(string f,string l,int balance)
{
    ofstream outfile("Bank.data",ios::trunc);
    Account acc(f,l,balance);
    accounts.insert(pair<int,Account>(acc.getAccNO(),acc));

    map<int,Account>::iterator itr;
    for(itr=accounts.begin();itr!=accounts.end();itr++)
    {
        outfile<<itr->second;
    }
    outfile.close();
    return acc;
}

void Bank::DeleteAccount(int ano)
{
    map<int,Account>::iterator itr;
    itr=accounts.find(ano);
    cout<<"Account Deleted: "<<endl;
    cout<<itr->second;
    accounts.erase(ano);
}

Account Bank:: Deposit(int ano,int amount)
{
    map<int,Account>::iterator itr;
    itr=accounts.find(ano);
    itr->second.deposit(amount);
    return itr->second;
}

Account Bank:: Withdraw(int ano,int amount)
{
    map<int,Account>::iterator itr;
    itr=accounts.find(ano);
    itr->second.withdraw(amount);
    return itr->second;
}

void Bank:: showAllAccount()
{
    map<int,Account>::iterator itr;
    for(itr=accounts.begin();itr!=accounts.end();itr++)
    {
        cout<<"Account:"<<endl<<itr->first<<endl<<itr->second<<endl;
    }
}
Account Bank:: BalanceEnquiry(int ano)
{
    map<int,Account>::iterator itr;
    itr=accounts.find(ano);
    return itr->second;
}
Bank::~Bank()
{
    ofstream outfile;
    map<int,Account>::iterator itr;
    for(itr=accounts.begin();itr!=accounts.end();itr++)
    {
        outfile<<itr->second;
    }
    outfile.close();
}
