#include <stdio.h>
#include <math.h> // Required for sqrt() function

// Function to check if a number is prime
int isPrime(int n) {
    if (n <= 1) {
        return 0; // 0 and 1 are not prime numbers
    }
    if (n <= 3) {
        return 1; // 2 and 3 are prime numbers
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return 0; // Divisible by 2 or 3, so not prime
    }

    // Check for divisors from 5 onwards with a step of 6
    // (optimizes checking by skipping multiples of 2 and 3)
    for (int i = 5; i * i <= n; i = i + 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return 0; // Divisible by i or i+2, so not prime
        }
    }
    return 1; // If no divisors found, the number is prime
}

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
