#include <stdio.h>
#include<conio.h>


int main(void)
{
    int n, m, largest;

    int arr[100][100];
    int swap[100][100];

    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    largest = arr[0][0];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            swap[i][j] = arr[i][j];
            if (largest < arr[i][j])
            {
                swap[i][j] = arr[j][i];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", swap[i][j]);
            if (j == m - 1)
            {
                printf("\n");
            }
        }
    }

    return 0;
}

