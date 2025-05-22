#include <iostream>
#include <limits>

char getUserChoice();
char getComputerChoice();
void showChoice(char player1);
void ChooseWinner(char player1, char player2);

int main(){

    int choice = 0;
    char player1;
    char player2;
    
    do{

        std::cout << "****************************************\n";
        std::cout << "Welcome to the Rock-Paper-Scissors Game!\n";
        std::cout << "****************************************\n";
        std::cout << "1. Continue to play the game\n";
        std::cout << "2. Exit\n";
        std::cout << "****************************************\n";
        std::cin >> choice;
        std::cout << "****************************************\n";

        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 

        switch(choice){

            case 1:
                player1 = getUserChoice();
                std::cout << "********************************\n";
                std:: cout << "Player1 made a choice of: ";
                showChoice(player1);
                player2 = getComputerChoice();
                std::cout << "********************************\n";
                std:: cout << "Player2 made a choice of: ";
                showChoice(player2);
                std::cout << "********************************\n";
                ChooseWinner(player1, player2);
                break;

            case 2:
                std::cout << "Thank you for playing the game!\n";
                std::cout << "********************************\n";
                break;
            
            default:
                std:: cout << "Invalid choice!\n";
                std:: cout << "*******************************\n";
        }  

    }while(choice != 2);

    return 0;
}

char getUserChoice(){
    
    char player1;
    std::cout << "****************************************\n";
    std::cout << "Welcome to the Rock-Paper-Scissors Game!\n";
    std::cout << "****************************************\n";

    do{
        
        std::cout << "Please choose one of the following\n";
        std::cout << "'r' for rock\n'p' for paper\n's' for scissors\n";
        std::cout << "************************************\n";
        std::cout << "Enter your choice: \n";
        std::cout << "************************************\n";
        std::cin >> player1;
    	
        if(player1 != 'r' || player1 != 'p' || player1 != 's'){
            std::cout << "Choice is invalid!\n";
        }

    }while(player1 != 'r' && player1 != 'p' && player1 != 's');

    return player1;

}


char getComputerChoice(){
    
    srand(time(0));
    int num = rand() % 3 + 1;

    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }
    
    return 0;
}

void showChoice(char player1){
    
    switch(player1){
        case 'r' : std::cout << "Rock\n";
        break;

        case 'p' : std::cout << "paper\n";
        break;

        case 's' : std::cout << "Scissors\n";
        break;
    }
}

void ChooseWinner(char player1, char player2){

    switch(player1){

        case 'r':
            if(player2 == 'r'){
                std::cout << "It's a tie!\n";
            }

            else if(player2 == 'p'){
                std::cout << "Player2 has won!\n";
            }

            else{
                std::cout << "Player1 has won!\n";
            }
            break;

        case 'p':
            if(player2 == 'r'){
                std::cout << "Player1 has won!\n";
            }

            else if(player2 == 'p'){
                std::cout << "It's a tie!\n";
            }

            else{
                std::cout << "Player2 has won!\n";
            }
            break;

        case 's':
            if(player2 == 'r'){
                std::cout << "Player2 has won!\n";
            }

            else if(player2 == 'p'){
                std::cout << "Player1 has won!\n";
            }

            else{
                std::cout << "It's a tie!\n";
            }
            break;

    }
}
