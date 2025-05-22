#include <iostream>
#include <iomanip>
#include <limits>

void showBalance (double balance);
double deposit ();
double withdraw (double balance);


int main(){

    double balance = 0;
    int choice = 0;

    do{

        std::cout << "***** Welcome to Ruby Bank *****\n";
        std::cout << "1. Show balance\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Exit\n";
        std::cout << "********************************\n";
        std::cin >> choice;
        std::cout << "********************************\n";

        std::cin.clear();       //resets the error flags, allowing the cin stream to be used again for input.

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');     //cin.ignore(count, delimiter)
                                                                                //where count is the number of characters to ignore
                                                                                //and the delimiter is where it ends
        //std::numeric_limits<std::streamsize>::max() is It's the absolute maximum number of characters that the stream buffer can theoretically support


        switch(choice){

            case 1:
                showBalance(balance);
                std::cout << "********************************\n";
                break;

            case 2:
                balance += deposit();
                showBalance(balance);
                std::cout << "********************************\n";
                break;

            case 3:
                balance -= withdraw(balance);
                showBalance(balance);
                std::cout << "********************************\n";
                break;

            case 4:
                std::cout << "Thank you for using Ruby Bank!\n";
                std::cout << "********************************\n";
                break;

            default:
                std::cout << "Invalid choice!\n";
                std::cout << "********************************\n";
        }

    }while(choice != 4);

    return 0;
}


void showBalance (double balance){
    std::cout << "********************************\n";
    std::cout << "Your balance is $" << std::setprecision(2) << std::fixed << balance << '\n';
}

double deposit(){
    double amount = 0;
    std::cout << "Please enter the amount you wish to deposit: \n";
    std::cin >> amount;

    if(amount > 0){
        return amount; 
    }

    else{
        std::cout << "********************************\n";
        std::cout << "That's not a valid amount!\nDeposit faliled!\n";
        std::cout << "********************************\n";
        return 0;
    }


    return 0;
}

double withdraw (double balance){
    double amount = 0;
    std::cout << "Please enter the amount you wish to withdraw: \n";
    std::cin >> amount;


    if(amount < 0){
        std::cout << " Please enter a valid amount to withdraw";
        return 0;
    }

    else if (amount > balance){
        std::cout << "********************************\n";
        std::cout << "There is insufficent fund in account!\nWithdrawl faliled!\n";
        std::cout << "********************************\n";
        return 0;
    }

    else{
        return amount;
    }
    return 0;
}