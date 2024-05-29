#include <stdio.h>
#include <stdlib.h>

void EvenOdd(int *ptr, int size) {
    int *even = NULL;
    int *odd = NULL;
    int evenCount = 0;
    int oddCount = 0;

    for (int i = 0; i < size; i++) {
        if (ptr[i] % 2 == 0) {
            even = (int *)realloc(even, (evenCount + 1) * sizeof(int));
            even[evenCount++] = ptr[i];
        } else {
            odd = (int *)realloc(odd, (oddCount + 1) * sizeof(int));
            odd[oddCount++] = ptr[i];
        }
    }


    printf("Even numbers:");
    for (int i = 0; i < evenCount; i++) {
        printf(" %d", even[i]);
    }
    printf("\n");

    
    printf("Odd numbers:");
    for (int i = 0; i < oddCount; i++) {
        printf(" %d", odd[i]);
    }
    printf("\n");

    
}

int main() {
    int *ptr = NULL;
    int size = 0;
    int input;

    do {
        printf("Enter an element (0 to stop): ");
        scanf("%d", &input);

        if (input != 0) {
            ptr = (int *)realloc(ptr, (size + 1) * sizeof(int));
            ptr[size++] = input;
        }
    } while (input != 0);

    
    printf("Input:- ");
    for (int i = 0; i < size; i++) {
        printf("%d, ", ptr[i]);
    }
    printf("\n");


    EvenOdd(ptr, size);

    
 

    return 0;
}