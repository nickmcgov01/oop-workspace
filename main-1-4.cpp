#include<iostream>
void print_scaled(int array[3][3],int scale);
int main() {
    int array[3][3] = {
        {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8}
    };
    
    int scale;
    std::cout << "Enter the scale factor: ";
    std::cin >> scale;
    
    print_scaled(array, scale);
    
    return 0;
}