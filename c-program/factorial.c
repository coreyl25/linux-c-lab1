#include <stdio.h>

// Recursive factorial function
int factorial(int n) {
    // Base case: factorial of 0 or 1 is 1
    if (n <= 1) {
        return 1;
    }
    // Recursive case: n * factorial(n-1)
    return n * factorial(n - 1);
}

int main() {
    int num;
    
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &num);
    
    // Check for negative numbers
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }
    
    int result = factorial(num);
    printf("Factorial of %d is %d\n", num, result);
    
    return 0;
}
