 #include<stdio.h>

void insertionsort(int a[], int n) {
    int i, j, temp;
    for (i = 1; i < n; i++) {
        temp = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > temp) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
}

void printArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

int main() {
    int a[] = {12, 54, 65, 7, 23, 9, 78};
    int n = sizeof(a) / sizeof(a[0]);

    printf("Original array: ");
    printArray(a, n);

    insertionsort(a, n);

    printf("\nSorted array: ");
    printArray(a, n);
    return 0;
}
