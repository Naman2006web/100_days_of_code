//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/

#include <stdio.h>

int main() {
    int n, sum = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 10;   // get last digit
        sum += remainder;     // add to sum
        n /= 10;              // remove last digit
    }

    printf("Sum of digits = %d", sum);

    return 0;
}

