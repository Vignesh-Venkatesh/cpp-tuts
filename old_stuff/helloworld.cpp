#include <iostream>
#include <vector>

namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

typedef std::vector<std::pair<std::string, int>> pairlist_t; // convention to add _t for type
typedef std::string text_t;

using number_t = int; // more popular nowadays, since it works better with templates

int main(){

    // std::cout << "I like dosa!" << std::endl;
    // std::cout << "It's really good!" << std::endl;
    
    // for new line character, \n is better performance wise
    std::cout << "I like dosa!" << '\n';
    std::cout << "It's really good!" << '\n';

    // ---------------------------------------
    // variables
    // ---------------------------------------
    int x; // declaration
    x = 22; // assignment
    
    int y = 6; // declaration + assignment on the same line

    int sum = x+y;
    
    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';
    // ---------------------------------------
    
    
    // ---------------------------------------
    // types
    // ---------------------------------------
    
    // integer
    int age = 22;
    int year = 2025;
    
    // double (for floating point numbers)
    double price = 10.99;
    double gpa = 3.5;
    double temperature = 27.32;
    
    std::cout << price << '\n';
    
    // char (stores a single character)
    char grade = 'A';
    char initial = 'V';
    char dollarSign = '$';
    
    std::cout << initial << '\n';
    
    // boolean (true or false)
    bool isStudent = true;
    bool isPoweredOn = false;
    bool isAvailable = true;
    
    std::cout << isStudent << '\n'; // returns 1
    std::cout << isPoweredOn << '\n'; // returns 0
    
    // strings (objects that represent a sequence of text)
    std::string name = "Vignesh";
    std::string day = "Monday";
    std::string food = "Dosa";
    std::string city = "New York City";

    std::cout << name << '\n';
    std::cout << day << '\n';
    std::cout << food << '\n';
    std::cout << city << '\n';

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old" << '\n';
    // ---------------------------------------
    
    
    // ---------------------------------------
    // constants (const)
    // ---------------------------------------

    // naming convention for constants is to type them in uppercase
    const double PI = 3.14159;
    double radius = 10;
    double circumference = 2*PI*radius;
    
    std::cout << "Circumference: " << circumference << "cm" << '\n';
    
    // examples
    const int LIGHT_SPEED = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;
    // ---------------------------------------
    
    // ---------------------------------------
    // namespace
    // ---------------------------------------
    std::cout << x << '\n'; 
    std::cout << first::x << '\n'; // value of x from first namespace
    std::cout << second::x << '\n'; // value of x from second namespace
    // ---------------------------------------
    
    // ---------------------------------------
    // custom type (typedef (or) using)
    // ---------------------------------------
    pairlist_t piarlist;
    text_t first_name = "Vignesh";
    number_t lol = 1238201;
    std::cout << first_name << '\n'; 
    std::cout << lol << '\n'; 
    // ---------------------------------------
    
    // ---------------------------------------
    // user input
    // ---------------------------------------
    text_t username;
    number_t userage;


    std::cout << "What is your name?" << '\n';
    std::cin >> username;
    
    std::cout << "What is your age?" << '\n';
    std::cin >> userage;

    std::cout << "\nHello " << username << "\n";
    std::cout << "\nYou are " << userage << "\n";

    // ---------------------------------------
    
    // ---------------------------------------
    // if statements
    // ---------------------------------------
    std::cout << "What is your age?";
    std::cin >> userage;

    if (userage >= 18) { 
        std::cout << "You are welcome \n";
    } else {
        std::cout << "You are not allowed \n";
    }
    // ---------------------------------------
    return 0;
}