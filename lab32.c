#include <stdio.h>

// Function to calculate the sum of digits
int Sum(int *num) {
    int n = *num;
    int sum = 0;

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

// Function to reverse a number
int Rev(int *num) {
    int n = *num;
    int reversed = 0;

    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    return reversed;
}

int main() {
    int Var;

   
    printf("Enter a number: ");
    scanf("%d", &Var);

    
    int sum = Sum(&Var);
    printf("Sum = %d\n", sum);

    int reverse = Rev(&Var);
    printf("Reverse = %d\n", reverse);

    return 0;
}