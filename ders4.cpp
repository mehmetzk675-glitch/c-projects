#include <stdio.h>

#define SIZE 5

void readMatrix(int matris[SIZE][SIZE]) {
    int i, j;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            scanf("%d", &matris[i][j]);
        }
    }
}

void printMatrix(int matris[SIZE][SIZE]) {
    int i, j;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("|%d|", matris[i][j]);
        }
        printf("\n");
    }
}

int sumMatrix(int matris[SIZE][SIZE]) {
    int i, j, sum = 0;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            sum += matris[i][j];
        }
    }
    return sum;
}

int main() {
    int matris[SIZE][SIZE];
    
    readMatrix(matris);
    printMatrix(matris);
    
    int toplam = sumMatrix(matris);
    printf("\nTum elemanlarin toplami: %d\n", toplam);

    int bolum = toplam / 5;
    printf("Toplamin 5'e bolunmus hali: %d\n", bolum);

    return 0;
}

