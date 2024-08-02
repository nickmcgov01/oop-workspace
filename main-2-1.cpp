#include <iostream>
#include <string>

void print_binary_str(std::string decimal_number);
int main() {
    std::cout << "Enter a number:" << std::endl;
    std::string decimal_number;
    std::getline(std::cin, decimal_number);

    print_binary_str(decimal_number); 

    return 0;
}