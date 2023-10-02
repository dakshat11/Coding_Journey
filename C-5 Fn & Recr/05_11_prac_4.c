#include <stdio.h>

void fibonacci(int n);

int main() {
    int numTerms;

    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &numTerms);

    printf("Fibonacci series up to %d terms:\n", numTerms);
    fibonacci(numTerms);

    return 0;
}

void fibonacci(int n) {
    int first = 0, second = 1, next;

    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }

        printf("%d ", next);
    }

    printf("\n");
}
