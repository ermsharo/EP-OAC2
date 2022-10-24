#include <stdio.h>
int main()
{
    int firstNumberUsp[] = {1, 0, 8, 1, 9, 8, 5, 7};
    int secondNumberUsp[] = {1, 0, 7, 2, 3, 7, 4, 9};

    float initialArray[] = {3.0, 2.1, 6.7, 8.7, 9.7, 10.7, 4.0, 7.5, 12.5, 15.5};

    int sumOfNumberUspOne = 0;
    int sumOfNumberUspTwo = 0;

    int verifyMethods(int fn[8], int sn[8])
    {

        int sum = 0;
        for (int i = 0; i < 8; i++)
        {
            sum += fn[i] + sn[i];
        }
        return sum;
    }

    float bubble_sort(float vetor[], int n)
    {
        int k, j, aux;
        for (k = 1; k < n; k++)
        {
            printf("\n[%d] ", k);

            for (j = 0; j < n - 1; j++)
            {
                printf("%d, ", j);

                if (vetor[j] > vetor[j + 1])
                {
                    aux = vetor[j];
                    vetor[j] = vetor[j + 1];
                    vetor[j + 1] = aux;
                }
            }
        }

        return 0;
    }

    void quick_sort(int *a, int left, int right)
    {
        int i, j, x, y;

        i = left;
        j = right;
        x = a[(left + right) / 2];

        while (i <= j)
        {
            while (a[i] < x && i < right)
            {
                i++;
            }
            while (a[j] > x && j > left)
            {
                j--;
            }
            if (i <= j)
            {
                y = a[i];
                a[i] = a[j];
                a[j] = y;
                i++;
                j--;
            }
        }

        if (j > left)
        {
            quick_sort(a, left, j);
        }
        if (i < right)
        {
            quick_sort(a, i, right);
        }
    }
    verifyMethods(firstNumberUsp, secondNumberUsp);
    
    printf(" ep \n");
    return 0;
}

