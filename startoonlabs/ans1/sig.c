#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    int n = 100; 
    double data[n];
    int maxima[n], minima[n];
    int max_count = 0, min_count = 0;

    file = fopen("./Data_1.txt", "r"); 
    for (int i = 0; i < n; i++) {
        fscanf(file, "%lf", &data[i]);
    }

    for (int i = 1; i < n-1; i++) {
        if (data[i] > data[i-1] && data[i] > data[i+1]) {
            maxima[max_count++] = i;
        }
        if (data[i] < data[i-1] && data[i] < data[i+1]) {
            minima[min_count++] = i;
        }
    }

    printf("Maxima points: ");
    for (int i = 0; i < max_count; i++) {
        printf("%d ", maxima[i]);
    }
    printf("\nMinima points: ");
    for (int i = 0; i < min_count; i++) {
        printf("%d ", minima[i]);
    }

    fclose(file);
    return 0;
}
