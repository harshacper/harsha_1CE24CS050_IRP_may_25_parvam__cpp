#include<iostream>
using namespace std;
class ATM
{
    private:
            float balance=10000;
            bool VerifyPIN(int PIN)
            {
                return PIN==1234;
            }
    public:       
    void withdraw(int PIN,int wamount)
    {
        if(VerifyPIN(PIN))
        {
            if(balance>=wamount)
            {
                cout << "Withdrawal Successful..." << endl;
                cout << "Remaining Balance Amount : " << balance << endl;
                cout << "Thank You" << endl;
            }
            else
            {
                cout<<"Insufficient Balance!!!"<<endl;
            }
        }
        else
        {
            cout<<"Incorrect PIN!!! Access Denied"<<endl;
        }
    }
            
};
int main()
{
    ATM A1;
    A1.withdraw(2345,11000);
    cout<<"-------------------------------"<<endl;
    A1.withdraw(2345,5000);
    cout<<"-------------------------------"<<endl;
    A1.withdraw(1234,11000);
    cout<<"-------------------------------"<<endl;
    A1.withdraw(1234,5000);
    cout<<"-------------------------------"<<endl;
    return 0;
}