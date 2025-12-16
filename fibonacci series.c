#include<stdio.h>

int fib(int x);

int main()
{
    int i, n;
    printf("Enter any integer number: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", fib(i));
    }

    return 0;
}

int fib(int x)
{
    if(x == 0 || x == 1)
        return x;
    else
        return (fib(x - 1) + fib(x - 2));
}

