#include <stdio.h>
#include <stdlib.h>


int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return 0;
    }
    return 1;
}


int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int *ptr = NULL;
    int size = 0;
    int input;

    while (1) {
        printf("Enter a number (or a non-prime number to exit): ");
        scanf("%d", &input);

        if (!isPrime(input)) {
            break;
        }

    
        ++size;
        ptr = (int *)realloc(ptr, size * sizeof(int));
       

        
        ptr[size - 1] = input;
    }

    
    qsort(ptr, size, sizeof(int), compare);

    printf("Sorted prime numbers: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", ptr[i]);
    }

    
    

    return 0;
}