
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    long long minDiff = -1;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            long long diff = llabs((long long)arr[i] - arr[j]);

            if (minDiff == -1 || diff < minDiff)
            {
                minDiff = diff;
            }
        }
    }

    printf("%lld", minDiff);

    return 0;
}
