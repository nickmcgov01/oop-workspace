#include<iostream>
int count_evens(int number);
int main() {
    int number;
    fprintf(stdout, "Enter a number: ");
    fscanf(stdin, "%d", &number);

    int even_count = count_evens(number);
    fprintf(stdout, "Number of even numbers less than %d: %d\n", number, even_count);

    return 0;
}