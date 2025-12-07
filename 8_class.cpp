#include <iostream>
using std::string;


class AbstractEmployee {
    virtual void AskForPromotion()=0;
};

// by default every member in a class is private
// in c++ three modifiers

// private - not accessible outside of the class
// public - able to access outside of the class
// protected - in between private and public

class Employee:AbstractEmployee {
private:
    string Name;
    string Company;
    int Age;
public:

    
    string getName(){
        return Name;
    }  
    void setName(string name){
        Name = name;
    }
    
    string getCompany(){
        return Company;
    }  
    void setCompany(string company){
        Company = company;
    }
    
    int getAge(){
        return Age;
    }  
    void setAge(int age){
        Age = age;
    }
    

    void IntroduceYourself(){
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Age - " << Age << std::endl;
        std::cout << "Company - " << Company << std::endl;
    }

    void AskForPromotion(){
        if (Age > 30){
            std::cout << Name << " got promoted" << "\n";
        } else {
            std::cout << Name << ", sorry NO promotion for you!" << "\n";
        }
    };


    // constructor
    Employee(string name, string company, int age){
        // setName(name);
        Name = name;
        Company = company;
        Age = age;
    }
};


int main(){
    
    // Employee employee1;    
    // employee1.Name = "Vignesh";
    // employee1.Age = 22;
    // employee1.Company = "NYU";
    // employee1.IntroduceYourself();

    // Employee employee2;
    // employee2.Name = "Pixel";
    // employee2.Age = 1;
    // employee2.Company = "Amazon";
    // employee2.IntroduceYourself();


    // Employee employee1 = Employee("Vignesh", "NYU", 22);
    // employee1.IntroduceYourself();

    // Employee employee2 = Employee("Pixel", "Amazon", 1);
    // employee2.IntroduceYourself();


    // employee2.setAge(2);
    // std::cout << employee2.getName() << " is " << employee2.getAge() << " years old.";

    Employee employee1 = Employee("Vignesh", "NYU", 22);
    Employee employee2 = Employee("Pixel", "Amazon", 35);

    employee1.AskForPromotion();
    employee2.AskForPromotion();

    return 0;
    
}