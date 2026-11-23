
#include <stdio.h>

int main()
{
    int r, c;
    int count = 0;

    scanf("%d %d", &r, &c);

    int arr[r][c];

    // Read matrix elements
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // Check every element
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            int isPeak = 1;

            // Check upper neighbour
            if (i > 0 && arr[i][j] <= arr[i - 1][j])
                isPeak = 0;

            // Check lower neighbour
            if (i < r - 1 && arr[i][j] <= arr[i + 1][j])
                isPeak = 0;

            // Check left neighbour
            if (j > 0 && arr[i][j] <= arr[i][j - 1])
                isPeak = 0;

            // Check right neighbour
            if (j < c - 1 && arr[i][j] <= arr[i][j + 1])
                isPeak = 0;

            if (isPeak)
                count++;
        }
    }

    printf("%d", count);

    return 0;
}
