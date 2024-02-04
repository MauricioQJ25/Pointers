#include <iostream>

using std::string;

class Employee {
public:
    string Name;
    string Company;
    int Age;

    void IntroduceYourself(){
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl;
    }

    Employee(){
        std::cout << "Employee object constructed" << std::endl;
    }
};


int main(){  
    Employee employee;
    employee.Name = "Mauricio";
    employee.Company = "Mauricio Inc company";
    employee.Age = 32;

    employee.IntroduceYourself();


    Employee employee2;
    employee2.Name = "Ilse";
    employee2.Company = "Heineken";
    employee2.Age= 29;

    employee2.IntroduceYourself();
    return 0;
}