#include <iostream>

int main(){
    
    // std::string cars[] = {"Volvo", "Mercedes", "Toyota"};

    // cars[2] = "Honda";

    // std::cout << cars[0] << std::endl; 
    // std::cout << cars[1] << std::endl;
    // std::cout << cars[2] << std::endl;

    // std::cout << "\n";

    // for (std::string car : cars){
    //     std::cout << car << std::endl;
    // }

    const int x = 5;
    int arr[x] = {1,2,3,4,5};
     
    int example[5];


    for (int i=0; i<5; i++){
        example[i] = i;
    }

    std::cout << example[0] << std::endl;
    std::cout << example[1] << std::endl;
    std::cout << example[2] << std::endl;
    std::cout << example[3] << std::endl;
    std::cout << example[4] << std::endl;
    std::cout << example[5] << std::endl;

    return 0;
}
