#include <stdio.h>

void selectionSort(float arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int maxIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[maxIdx]) {
                maxIdx = j;
            }
        }
        float temp = arr[i];
        arr[i] = arr[maxIdx];
        arr[maxIdx] = temp;
    }
}

int main() {
    int n;
    
    printf("Quantos alunos? ");
    scanf("%d", &n);

    float notas[n];

    printf("Coloque aqui as notas dos alunos:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &notas[i]);
    }

    selectionSort(notas, n);

    printf("Notas ordenadas de forma decrescente:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", notas[i]);
    }
    printf("\n");

    return 0;
}
