#include <stdio.h>
int fact(int);
int main()
{
    int n;
    printf("Enter a integer: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Integer is not positive ");
    }
    else
    {
        printf("Factorial of %d  is %d ", n, fact(n));
    }
}
int fact(int num)
{
    if (num == 0 || num == 1)
        return 1;
    else
        return (num * fact(num - 1));
}