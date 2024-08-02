#include <iostream>
#include <string>

void print_binary_str(std::string decimal_number) {
    int base10 = std::stoi(decimal_number); // Convert the entire string to an integer
    std::string binary_str = "";

    // Edge case for 0
    if (base10 == 0) {
        binary_str = "0";
    } else {
        while (base10 > 0) {
            binary_str = std::to_string(base10 % 2) + binary_str; // Append the remainder of base10 / 2
            base10 /= 2;
        }
    }

    std::cout << binary_str << std::endl;
}