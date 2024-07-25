#include <iostream>

void two_five_nine(int array[], int n) {
    int twoCount = 0;
    int fiveCount = 0;
    int nineCount = 0;
    for (int i = 0; i < n; i++) {
        switch (array[i]) {
            case 2:
                twoCount++;
                break;
            case 5:
                fiveCount++;
                break;
            case 9:
                nineCount++;
                break;
        }
    }
    fprintf(stdout, "2:%d;5:%d;9:%d\n", twoCount, fiveCount, nineCount);
}
