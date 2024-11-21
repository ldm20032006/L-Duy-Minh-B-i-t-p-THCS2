#include <stdio.h>
#include <stdlib.h>

#define MAX 100
#define MAX_VAL 30000

void find_most_frequent_numbers(int n, int arr[]) {
    int freq[MAX_VAL + 1] = {0}; 
    int max_freq = 0;          

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
        if (freq[arr[i]] > max_freq) {
            max_freq = freq[arr[i]];
        }
    }

    int printed[MAX_VAL + 1] = {0}; 
    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] == max_freq && !printed[arr[i]]) {
            printf("%d ", arr[i]);
            printed[arr[i]] = 1; 
        }
    }
    printf("\n");
}

int main() {
    int t; 
    scanf("%d", &t);

    while (t--) {
        int n; 
        scanf("%d", &n);

        int arr[MAX];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        find_most_frequent_numbers(n, arr);
    }

    return 0;
}

