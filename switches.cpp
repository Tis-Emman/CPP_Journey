#include <iostream>

class Bank {
public:
    void receipt() {
        std::cout << "Do you want to print a receipt? \n";
        std::cout << "******************************** \n";
        int rs;
        std::cout << "1. Yes\n";
        std::cout << "2. No\n";
        std::cin >> rs;
        switch(rs) {
            case 1:
                std::cout << "The machine prints the receipt\n";
                break;
            case 2:
                std::cout << "The machine exits....\n";
                break;
            default:
                std::cout << "Command is not recognized\n";
        }
    }

    void deposit() {
        std::cout << "How much you want to deposit? \n";
        int how_much;
        std::cin >> how_much;
        std::cout << "You successfully deposited: " << how_much << '\n';
    }

    void withdraw() {
        std::cout << "How much you want to withdraw? \n";
        int how_much;
        std::cin >> how_much;
        std::cout << "You withdrew " << how_much << '\n';
    }

    
};

int main() {
    Bank bank;
    bool continueTransaction = true;

    while (continueTransaction) {
        std::cout << "Welcome to Banko de Oro\n";
        std::cout << "Enter the action you want: \n";
        std::cout << "**************************\n";
        std::cout << "1. Deposit\n";
        std::cout << "2. Withdraw\n";
        int bank_choice;
        std::cin >> bank_choice;

        switch (bank_choice) {
            case 1:
                bank.deposit();
                bank.receipt();
                break;
            case 2:
                bank.withdraw();
                bank.receipt();
                break;
            default:
                std::cout << "The system does not recognize the command\n";
        }

        std::cout << "Do you want to continue? \n";
        std::cout << "************************\n";
        std::cout << "1. Yes\n";
        std::cout << "2. No\n";
        int wants;
        std::cin >> wants;

        switch (wants) {
            case 1:
                continueTransaction = true;
                break;
            case 2:
                continueTransaction = false;
                std::cout << "Exiting the system. Thank you!\n";
                break;
            default:
                std::cout << "Command is not recognized, exiting the system.\n";
                continueTransaction = false;
        }
    }

    return 0;
}
