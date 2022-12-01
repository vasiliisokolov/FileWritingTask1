#include <iostream>
#include <fstream>

int main()
{
    int number;
    
    std::ofstream file("statement.txt", std::ios::app);
    std::cout << "Enter the number of employees: " << std::endl;
    std::cin >> number;
    for (int i = 0; i < number; i++)
    {
        int sum;
        std::string name, surname, date;
        std::cout << "Enter the name of employe: " << std::endl;
        std::cin >> name;
        file << name << " ";
        std::cout << "Enter the surname of employe: " << std::endl;
        std::cin >> surname;
        file << surname << " ";
        std::cout << "Enter the date of payout: " << std::endl;
        std::cin >> date;
        file << date << " ";
        std::cout << "Enter the sum of payout: " << std::endl;
        std::cin >> sum;
        file << sum << std::endl;
    }
    file.close();
}