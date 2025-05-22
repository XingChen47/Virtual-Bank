#include <iostream>
#include <limits>

// Luhn algo
// 1. Double every second digit from right to left.
//    If doubled number is 2 digits, split them
// 2. Add all single digits from step 1
// 3. Add all odd numbered digits from right to left
// 4. Sum results from steps 2 & 3
// 5. If step 4 is divisible by 10, the card no. is valid


int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);

int main(){

    int result;
    std::string cardNumber;

    std::cout << "THE CREDIT CARD VALIDATOR!\n";
    std::cout << "Enter a credit card #: ";
    std::cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    if(result%10 == 0){
        std::cout << "Your card " << cardNumber << " is valid\n";
    }

    else{
        std::cout << "Your card " << cardNumber << " is not valid\n";
    }

    return 0;
}
    

int getDigit(const int number){
    // to seperate number that are double digits
    return number %10 + (number /10 %10);
}


int sumOddDigits(const std::string cardNumber){

    int sum = 0;

    for(int i = cardNumber.size() -1; i >= 0; i-=2){
        sum += cardNumber[i]- '0';
    }
    
    return sum;
}


int sumEvenDigits(const std::string cardNumber){
    
    int sum = 0;

    for(int i = cardNumber.size() -2; i >= 0; i-=2){
        sum += getDigit((cardNumber[i]- '0')*2);    //subtract '0' because we are handling a string (ASCII)
                                                    //or subtract 48 to get number 0 -9
    }
    
    return sum;
}