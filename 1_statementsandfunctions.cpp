#include <iostream>

int addNumbers(int a, int b){
    return a+b;
}

int subtractNumbers(int a, int b){
    return a-b;
}

int multiplyNumbers(int a, int b){
    return a*b;
}

void printError(){
    // to print error messages
    std::cerr << "std::cerr output: Something went wrong" << std::endl;
}

void printLog(){
    // to print log messages
    std::clog << "std::clog output: This is a log message" << std::endl;
}

int main(){
    
    int firstNumber = 3;
    int secondNumber = 7;

    std::cout << "first number: " << firstNumber << "\n";
    std::cout << "second number: " << secondNumber << "\n";

    int sum = addNumbers(firstNumber, secondNumber);
    std::cout << "sum: " << sum << "\n";

    int difference = subtractNumbers(firstNumber, secondNumber);
    std::cout << "difference: " << difference << "\n";

    int product = multiplyNumbers(firstNumber, secondNumber);
    std::cout << "product: " << product << "\n";

    printError();
    printLog();

    return 0;
}