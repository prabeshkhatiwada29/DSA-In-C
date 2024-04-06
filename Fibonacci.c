 #include <stdio.h>

int fibo(int n);

int main() {
    int num, i;
    printf("Enter the number of terms for Fibonacci: ");
    scanf("%d", &num);
    printf("Fibonacci series follows as: ");
    for (i = 0; i < num; i++) {
        printf("%d ", fibo(i));
    }
    return 0;
}

int fibo(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return (fibo(n - 1) + fibo(n - 2));
}
