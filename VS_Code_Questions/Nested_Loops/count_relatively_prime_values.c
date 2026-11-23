
#include <stdio.h>

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int main()
{
    int n, m;
    int count = 0;

    scanf("%d %d", &n, &m);

    for (int i = 1; i <= m; i++)
    {
        if (gcd(n, i) == 1)
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
