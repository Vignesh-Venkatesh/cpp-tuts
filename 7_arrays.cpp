#include <iostream>

int main(){
    
    std::string cars[] = {"Volvo", "Mercedes", "Toyota"};

    cars[2] = "Honda";

    std::cout << cars[0] << std::endl; 
    std::cout << cars[1] << std::endl;
    std::cout << cars[2] << std::endl;

    std::cout << "\n";

    for (std::string car : cars){
        std::cout << car << std::endl;
    }

    return 0;
}