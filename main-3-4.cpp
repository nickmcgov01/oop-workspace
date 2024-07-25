
int main() {
    char grade;
    fprintf(stdout, "Enter grade:\n");
    fscanf(stdin, "%c", &grade);
    print_pass_fail(grade);
    return 0;
}