#include<iostream>

using std::cout;
using std::cin;
using std::endl;

void print_pass_fail(char grade){
    switch (grade){
    case 'A':
    case 'B':
    case 'C':
        cout << "Pass" << endl;
        break;
    case 'D':
    case 'F':
        cout << "Fail" << endl;
        break;
    default:
        cout << "Nothing" << endl;
        break;
    }
}
