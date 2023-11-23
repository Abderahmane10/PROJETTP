#include <stdio.h>

void changer(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int sep(int arr[], int low, int high) {
    int pivot = arr[high];  
    int i = (low - 1);  

    for (int j = low; j <= high - 1; j++) {
        
        if (arr[j] <= pivot) {
            i++;  
            changer(&arr[i], &arr[j]);
        }
    }
    changer(&arr[i + 1], &arr[high]);
    return (i + 1);
}


void trier(int arr[], int low, int high) {
    if (low < high) {

        int pivotIndex = partition(arr, low, high);

        
        trier(arr, low, pivotIndex - 1);
        trier(arr, pivotIndex + 1, high);
    }
}

void aff(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Tableau avant le tri rapide : ");
    aff(arr, n);

    trier(arr, 0, n - 1);

    printf("Tableau après le tri rapide : ");
    aff(arr, n);

    return 0;
}
