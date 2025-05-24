# Virtual Bank

A simple C++ console application that simulates basic banking operations. Users can check their balance, deposit money, withdraw money, and exit the program. The application provides a user-friendly menu and ensures all transactions are validated.

## Features

- View current account balance
- Deposit money with input validation
- Withdraw money with balance checks (no overdrafts)
- User-friendly command-line menu
- Cross-platform: works on Linux, Windows, and macOS

## Installation

### 1. Clone the repository
```sh
git clone https://github.com/XingChen47/Virtual-Bank.git
cd Virtual-Bank
```

### 2. Compile the program

#### **Linux/macOS**
```sh
g++ -o bank Bank.cpp
```

#### **Windows (using MinGW)**
```sh
g++ -o bank.exe Bank.cpp
```
*Ensure `g++` is installed and in your PATH.*

## Usage

Run the compiled program from your terminal:

**Linux/macOS:**
```sh
./bank
```

**Windows:**
```sh
bank.exe
```

You will see a menu with options to show your balance, deposit money, withdraw money, or exit. Enter the number corresponding to your choice and follow the prompts.

**Example Output:**
```
***** Welcome to Ruby Bank *****
1. Show balance
2. Deposit Money
3. Withdraw Money
4. Exit
********************************
1
********************************
Your balance is $0.00
********************************
```

Transactions are validated to prevent negative deposits or overdrafts. The program will display informative messages for invalid operations.

## Customization

You can easily add more features (such as transaction history or user authentication) by expanding the source code.
