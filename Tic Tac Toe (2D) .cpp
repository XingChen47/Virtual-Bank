#include <iostream>
#include <ctime>


void createBoard(char board[3][3]);
void playerMove(char board[3][3], char player);
void computerMove(char board[3][3], char computer);
bool checkWinner(char board[3][3], char player);
bool checkTie(char board[3][3]);


int main()
{
    char board[3][3] = { { ' ', ' ', ' ' },
                         { ' ', ' ', ' ' },
                         { ' ', ' ', ' ' } };

    char player = 'X';
    char computer = 'O';
    bool running = true;

    std::cout << "WELCOME TO TIC-TAC-TOE!\n";
    createBoard(board);
    
    while(running){
        playerMove(board, player);
        createBoard(board);

        if(checkWinner(board,player)){
            running = false;
            break;
        }

        else if(checkTie(board)){
            running = false;
            break;
        }

        computerMove(board, computer);
        createBoard(board);
    
        if(checkWinner(board,player)){
            running = false;
            break;
        }

        else if(checkTie(board)){
            running = false;
            break;
        }
    }

    std::cout << "THANKS FOR PLAYING!";

    return 0;
}   



void createBoard(char board[3][3]){

    std::cout << "-------------\n";
    for (int i = 0; i < 3; i++) {
        std::cout << "| ";
        for (int j = 0; j < 3; j++) {
            std::cout << board[i][j] << " | ";
        }
        std::cout << "\n-------------\n";
    }
}


void playerMove(char board[3][3], char player){

    int row;
    int column;

    do{
        std::cout << "Enter a coordinate where you wish to place your marker\n" ;
        std::cout << "Row(1-3): \n";
        std::cin >> row;
        std::cout << "Column(1-3): \n";
        std::cin >> column;
        row--;
        column--;

        if(board[row][column] == ' '){
            board[row][column] = player;
            break;
        }

    }while(row < 0 || row > 3 || column < 0 || column > 3);

}


void computerMove(char board[3][3], char computer){

    int row;
    int column;

    srand(time(0));

    while(true){
        row = rand() % 3;
        column = rand() % 3;
        if (board[row][column] == ' '){
            board[row][column] = computer;
            break;
        }
    }

}



bool checkWinner(char board[3][3], char player){

    if(board[0][0] != ' ' && board[0][0] == board[0][1] && board[0][1] == board[0][2]){
        board [0][0] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";
    }

    else if(board[1][0] != ' ' && board[1][0] == board[1][1] && board[1][1] == board[1][2]){
        board [1][0] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";
    }

    else if(board[2][0] != ' ' && board[2][0] == board[2][1] && board[2][1] == board[2][2]){
        board [2][0] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";
    }

    else if(board[0][0] != ' ' && board[0][0] == board[1][0] && board[1][0] == board[2][0]){
        board [0][0] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";
    }

    else if(board[0][1] != ' ' && board[0][1] == board[1][1] && board[1][1] == board[2][1]){
        board [0][1] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";
    }

    else if(board[0][2] != ' ' && board[0][2] == board[1][2] && board[1][2] == board[2][2]){
        board [0][2] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";
    }

    else if(board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2]){
        board [0][0] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";
    }

    else if(board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0]){
        board [0][2] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";
    }

    else{
        return false;
    }

    return true;
}


bool checkTie(char board[3][3]){

    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++)
        if(board[i][j] == ' '){
            return false;
        }
    }

    std::cout << "IT'S A TIE!\n";

    return true;

    return 0;
}