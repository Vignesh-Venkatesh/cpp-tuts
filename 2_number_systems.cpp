#include <iostream>

int main(){

    int num1 = 15; // decimal
    int num2 = 017; // octal
    int num3 = 0x0F; // hexadecimal
    int num4 = 0b00001111; // binary

    int random;
    std::cout << sizeof(random) << std::endl; // size of the type

    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;
    std::cout << num4 << std::endl;
    return 0;
}