#include <iostream>
#include <string>

class Account_Details
{
    private:
     int Account_No;
     std::string user_name;
     long int Mobile_no;
     int Bank_Balance;
     
     int Pin;

    public:

     int Check_Balance()
    {
        return Bank_Balance;
    }

    int Withdrawal(int amount)
    {
        if (amount<=Bank_Balance)
        {
            Bank_Balance = Bank_Balance - amount;
            return amount;
        }
        else 
        {
            //std::cout<<"Insufficient Funds"
            return -1;
        }
    }

    void setData(int Account_No_a, std::string name, int Pin_a, long int Mobi, int Bank_Balance_a)
    {
        Account_No = Account_No_a;
        user_name = name;
        Pin = Pin_a;
        Mobile_no = Mobi;
        Bank_Balance = Bank_Balance_a;

    }
    
};

int main ()

{
    Account_Details user1;
    user1.setData(245675,"Abi", 4562, 9566124589, 4000);
    
    std::cout<<"Welcome to ATM"<<std::endl;
    std::cout<<user1.Check_Balance();
    std::cout<<user1.Withdrawal(1000);
    return 0;
}


