#include <stdio.h>
#include <stdlib.h>


int calculateSum(int *arr, int n, int extraElement) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (sum == extraElement);
}

void main() {
    int n;

    printf("Enter value of n: ");
    scanf("%d", &n);

    int *ptr = (int *)calloc(n, sizeof(int));

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }

    int extraElement;
    printf("Enter element: ");
    scanf("%d", &extraElement);

    if (calculateSum(ptr, n, extraElement)) {
        printf("SUM\n");
    } else {
        printf("NOTSUM\n");
    }

}