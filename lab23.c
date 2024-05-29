    
#include <stdio.h>

int main() {
    int randomNumbers[100];
    int size, duplicateCount = 0;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &randomNumbers[i]);
    }
    
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (randomNumbers[i] == randomNumbers[j]) {
                printf("Duplicate element %d found at index %d and %d\n", randomNumbers[i], i, j);
                duplicateCount++;
            }
        }
    }
    
    if (duplicateCount == 0) {
        printf("No duplicate elements found.\n");
    } else {
        printf("Total number of duplicate elements: %d\n", duplicateCount);
    }

    return 0;
}
