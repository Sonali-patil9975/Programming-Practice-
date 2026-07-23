#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    long n;
    printf("Enter a number: ");
    if (scanf("%ld", &n) != 1) {
        return 0;
    }

    if (n <= 1) {
        printf("%ld is not a prime number.\n", n);
        return 0;
    }

    bool isPrime = true;
    for (long i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        printf("%ld is a prime number.\n", n);
    } else {
        printf("%ld is not a prime number.\n", n);
    }

    return 0;
}
