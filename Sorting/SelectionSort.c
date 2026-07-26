

#include <stdio.h>
#define max_size 30

void selection_sort(int ar[], int n)
{
    int i, j, min, temp;
    for (i = 0; i < n - 1; i++)
    {
        min = i;  // Initialize min index to current i
        for (j = i + 1; j < n; j++)
        {
            if (ar[j] < ar[min])
            {
                min = j;
            }
        }
        // Swap ar[i] and ar[min] if needed
        if (min != i)
        {
            temp = ar[min];
            ar[min] = ar[i];
            ar[i] = temp;
        }
    }
}

int main()
{
    int ar[max_size], n, i;
    printf("Enter number of elements (max %d): ", max_size);
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    selection_sort(ar, n);

    printf("Sorted array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}
