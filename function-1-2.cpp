#include <iostream>

int is_identity(int array[10][10]) {
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            if (i == j && array[i][j] != 1) {
                return false;  // Diagonal element is not 1
            } else if (i != j && array[i][j] != 0) {
                return false;  // Off-diagonal element is not 0
            }
        }
    }
    return true;  // All checks passed, it is an identity matrix
}