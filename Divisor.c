#include <stdio.h>

void findDivisors(int number) {
    int count = 0;
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            count++;
        }
    }
    printf("Number of divisors: %d\n", count);
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    findDivisors(number);
    return 0;
}