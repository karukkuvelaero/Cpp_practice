#include <iostream>
#include <string>

/*Mini Project -ATM
  -> Check Balance
  -> Cash withdraw
  -> User Details
  -> Update Mobile No.
*/

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
    Account_Details user2;

    user1.setData(245675,"Abi", 4562, 9566124589, 4000);
    user2.setData(123456,"ABC", 1234, 1234567890, 6000);

    std::cout<<"Select user:\n"
             <<user1.user_name;
    bool exit_condition = true;
    do
    {
        char choice;
        
        std::cout<<"Welcome to ATM"<<std::endl;
        std::cout<<"Enter your Choice\n"
                 <<"1. Check_Balance\n"
                 <<"2. Cash withdraw\n"
                 <<"3. Show User Details\n"
                 <<"4. Update Mobile no.\n"
                 <<"5. Exit\n";
        std::cin>>choice;
        switch (choice)
        {
        case '1':
            /* code */
            break;
        case '5':
            exit_condition = false;
            break;
        default:
            std::cout<<"Please enter a valid input"<<std::endl;
            
        }
        
    } while (exit_condition);
    
    
    std::cout<<user1.Check_Balance();
    std::cout<<user1.Withdrawal(1000);
    return 0;
}


