//NCR.c
#include <stdio.h>
// Function to calculate factorial of a number
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n, r;
    int nCr;

    // Input values for n and r
   a: printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);

    if (r > n) {
        printf("r should not be greater than n.\n");
        goto a;
    }

    // Calculate nCr using the formula nCr = n! / (r! * (n - r)!)
    nCr = factorial(n) / (factorial(r) * factorial(n - r));

    // Output the result
    printf("nCr = %d\n", nCr);

    return 0;
}
