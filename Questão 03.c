#include <stdio.h>

void insertionSort(float arr[], int n) {
    for (int i = 1; i < n; i++) {
        float key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int n;
    
    printf("Quantos produtos? ");
    scanf("%d", &n);

    float precos[n];

    printf("Digite os preços dos produtos:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &precos[i]);
    }

    insertionSort(precos, n);

    printf("Preços ordenados:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", precos[i]);
    }
    printf("\n");

    return 0;
}
