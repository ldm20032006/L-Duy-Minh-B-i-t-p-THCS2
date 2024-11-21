#include <stdio.h>


void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubbleSort(int arr[], int n) {
    printf("Day ban dau: ");
    printArray(arr, n);
    
    for (int i = 0; i < n - 1; i++) {
        printf("Buoc %d:\n", i + 1);
        int swapped = 0; 
        
        for (int j = 0; j < n - i - 1; j++) { 
            if (arr[j] > arr[j + 1]) { 
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        printArray(arr, n); 
        
      
        if (!swapped) {
            printf("Khong co hoan vi, day da sap xep.\n");
            break;
        }
    }
}

int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    int arr[n];
    
    printf("Nhap các phan tu:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    bubbleSort(arr, n);
    
    printf("Day da sap xep: ");
    printArray(arr, n);
    
    return 0;
}
