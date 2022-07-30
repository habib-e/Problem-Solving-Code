#include <stdio.h>
int main() {
    int n, i; //variable
    unsigned long long fact = 1; // for any positive large value
    printf("Enter an integer: "); //printing where user give input
    scanf("%d", &n); //taking input


    if (n < 0) // shows error if the user enters a negative integer
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= n; ++i) { // simple loop for finding factorial of n
            fact *= i; // actual logic for calculating factorial, for every iteration of variable i
                        // fact variable stores each previous and next value of i like how we calculate factorial
        } // ending loop
        printf("Factorial of %d = %llu", n, fact); // printing the factorial
    }

    return 0;
}
