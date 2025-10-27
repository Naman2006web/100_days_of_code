//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/

#include <stdio.h>

int main() {
    long long num;
    int count[10] = {0}; // Array to store count of digits
    int digit, i, maxCount = 0, mostFreqDigit;

    // Read the number
    scanf("%lld", &num);

    // Count occurrences of each digit
    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    // Find the digit with maximum occurrences
    for (i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            mostFreqDigit = i;
        }
    }

    printf("%d\n", mostFreqDigit);

    return 0;
}
