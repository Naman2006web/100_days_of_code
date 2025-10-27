//Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/

#include <stdio.h>

int main() {
    int a,b,c;

    printf("Enter the three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    int max = a;
    if (b> max) max = b;
    if (c>max) max =c;

    printf("Largest number: %d\n", max);
    
    return 0;
}