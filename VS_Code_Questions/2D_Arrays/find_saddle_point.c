
#include <stdio.h>

int main()
{
    int r, c;
    int found = 0;

    scanf("%d %d", &r, &c);

    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < r && !found; i++)
    {
        for (int j = 0; j < c; j++)
        {
            int isMin = 1;
            int isMax = 1;

            // Check whether it is minimum in its row
            for (int k = 0; k < c; k++)
            {
                if (arr[i][j] > arr[i][k])
                    isMin = 0;
            }

            // Check whether it is maximum in its column
            for (int k = 0; k < r; k++)
            {
                if (arr[i][j] < arr[k][j])
                    isMax = 0;
            }

            if (isMin && isMax)
            {
                printf("%d %d %d", i, j, arr[i][j]);
                found = 1;
                break;
            }
        }
    }

    if (!found)
        printf("None");

    return 0;
}
