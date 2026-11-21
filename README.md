# atm simulation system

a simple, menu-driven atm (automated teller machine) simulation system developed using the c programming language as part of the c programming mini hackathon.

the program simulates basic atm operations such as checking account balance, depositing money, and withdrawing money.

## features

- check balance: view the current account balance.
- deposit money: deposit money into the account.
- withdraw money: withdraw money if sufficient balance is available.
- input validation: prevents negative or zero transaction amounts.
- insufficient balance check: rejects withdrawals exceeding the available balance.
- menu-driven interface: allows users to perform multiple transactions until they choose to exit.

## initial account balance

the program starts with a default account balance of rs. 5000.00.

## technologies used

- programming language: c
- compiler: gcc
- ide: visual studio code
- terminal: windows command prompt

## c concepts used

- variables and data types
- global variables
- user-defined functions
- conditional statements (if, else if, else)
- switch-case statements
- do-while loop
- input and output functions (scanf and printf)
- basic input validation

## how to run the program

### 1. clone the repository

```bash
git clone <repository-url>
```

### 2. open the project folder

```bash
cd ATM-Simulation
```

### 3. compile the c program

make sure gcc is installed on your system.

```bash
gcc atm_simulation.c -o atm
```

### 4. run the program

on windows:

```cmd
