#include <stdio.h>

int countMultiples(int n, int k)
{
    return n / k;
}

int main()
{
    int n, k, result;

    scanf("%d %d", &n, &k);

    result = countMultiples(n, k);

    printf("%d", result);

    return 0;
}