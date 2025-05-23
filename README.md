# Virtual Bank

A C++ program that allows user to experience having a bank account and carry some functions.

## Features

- check balance, deposit money and withdraw money from the virtual bank.
- Simple command-line interface for user interaction
- Cross-platform: works on Linux, Windows, and macOS

## Installation

### 1. Clone the repository
```sh
git clone https://github.com/XingChen47/Vritual-Bank.git
cd Virtual-Bank
```

### 2. Compile the program

#### **Linux/macOS**
```sh
g++ -o Virtual_Bank "Bank.cpp"
```

#### **Windows (using MinGW)**
```sh
g++ -o Virtual_Bank.exe "Bank.cpp"
```
*Make sure `g++` is available in your PATH. If using another compiler, adjust the command accordingly.*


## Usage

### **Interactive Mode:**  
Simply run the compiled program and follow the prompt to enter your choice of action.

**Linux/macOS:**
```sh
./Virtual_Bank
```

**Windows:**
```sh
Virtual_Bank.exe
```


## How it Works

1. **Format Validation:** Checks that input for choice is only integer and only ranges from 1-4
2. **Format Validation:** Checks that amount deposited/withdrew is not negative and these actions can only be carried out if the account has enough balance

