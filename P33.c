//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include <stdio.h>
#include <math.h>

int main() {
    int n, original, remainder, digits = 0;
    double result = 0.0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    // Count number of digits
    int temp = n;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    // Compute sum of each digit raised to the power of digits
    temp = n;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, digits);
        temp /= 10;
    }

    // Check if Armstrong
    if ((int)result == original)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}
