
#include <stdio.h>
int main() {
    // Initialize variables
    int a = 0;                            // First Fibonacci number
    int b = 1;                           // Second Fibonacci number
    int n;
                                  // Prompt the user to enter the number of terms
    printf("Enter the number of Fibonacci terms to generate: ");
    scanf("%d", &n);
    
                                 // Display the first two Fibonacci numbers
    printf("Generating Fibonacci Series up to %d terms:\n", n);
    printf("0, 1, ");

                                 // Generate and display the Fibonacci series
    for (int i = 2; i < n; i++) {
        int temp = a + b;
        printf("%d, ", temp);
        a = b;

        b = temp;
    }
    printf("\n");

    return 0;
}
