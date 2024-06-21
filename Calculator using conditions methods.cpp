#include <iostream>

void Multiply_two_number(){
    std::cout << "Welcome to Multiply two numbers!";
    std::cout << "Enter the first number: \n";
    int MN;
    std::cin >> MN;
    std::cout << "Enter the second number: \n";
    int MN2;
    std::cin >> MN2;

std::cout << "Result: " << MN * MN2 ;

};

void Add_two_number(){
    std::cout << "Welcome to Add two numbers! \n";
    std::cout << "Enter the first number: \n";
    int AN;
    std::cin >> AN;
    std::cout << "Enter the second number: \n";
    int AN2;
    std::cin >> AN2;
    std::cout << "Result: " << AN + AN2;
};

void Subtract_two_number(){
    std::cout << "Welcome to Subtract two numbers! \n";
    std::cout << "Enter the first number: \n";
    int SN;
    std::cin >> SN;
    std::cout << "Enter the second number: \n";
    int SN2;
    std::cin >> SN2;
    std::cout << "Result: " << SN - SN2;
};

void Divide_two_number(){
    std::cout << "Welcome to Divide two numbers! \n";
    std::cout << "Enter the first number: \n";
    int DN;
    std::cin >> DN;
    std::cout << "Enter the second number: \n";
    int DN2;
    std::cin >> DN2;
    std::cout << "Result: " << DN / DN2;
};




int main(){

    std::cout << "Welcome to numbers numbers! ";
    std::cout << "What would you like to perform operators? \n";
    std::string operators;
    std::cin >> operators;

    if(operators=="add"){
        Add_two_number();
    }

    else if(operators=="subtract"){
        Subtract_two_number();
    }
    else if(operators=="multiply"){
        Multiply_two_number();
    }
    else if(operators=="divide"){
        Divide_two_number();
    }

    else{
        std::cout << "EXITED";
    }
    
    return 0;
}