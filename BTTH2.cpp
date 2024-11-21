#include <stdio.h>
#define MAX 100

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortAscending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

int main() {
    int n;
    int arr[MAX], even[MAX], odd[MAX];
    int evenCount = 0, oddCount = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            even[evenCount++] = arr[i];
        } else {
            odd[oddCount++] = arr[i];
        }
    }

    sortAscending(even, evenCount);
    sortAscending(odd, oddCount);

    for (int i = 0; i < evenCount; i++) {
        printf("%d ", even[i]);
    }

    for (int i = 0; i < oddCount; i++) {
        printf("%d ", odd[i]);
    }

    return 0;
}

