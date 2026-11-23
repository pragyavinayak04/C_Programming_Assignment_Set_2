
#include <stdio.h>

int main()
{
    int r, c;

    scanf("%d %d", &r, &c);

    int arr[r][c];
    int rowSum, colSum;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // Calculate row sums
    for (int i = 0; i < r; i++)
    {
        rowSum = 0;

        for (int j = 0; j < c; j++)
        {
            rowSum += arr[i][j];
        }

        printf("%d ", rowSum);
    }

    printf("\n");

    // Calculate column sums
    for (int j = 0; j < c; j++)
    {
        colSum = 0;

        for (int i = 0; i < r; i++)
        {
            colSum += arr[i][j];
        }

        printf("%d ", colSum);
    }

    return 0;
}
