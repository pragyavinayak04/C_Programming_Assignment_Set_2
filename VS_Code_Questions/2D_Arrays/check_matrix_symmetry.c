
#include <stdio.h>

int main()
{
    int n;
    int symmetric = 1;

    scanf("%d", &n);

    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i][j] != arr[j][i])
            {
                symmetric = 0;
                break;
            }
        }

        if (symmetric == 0)
            break;
    }

    if (symmetric == 1)
        printf("YES");
    else
        printf("NO");

    return 0;
}
