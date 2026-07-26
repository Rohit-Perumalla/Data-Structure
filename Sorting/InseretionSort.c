
#include <stdio.h>
#define max_size 30

void insertion_sort(int ar[], int n)
{
    int i, j, temp;
    for (i = 1; i < n; i++)  // Corrected I -> i
    {
        temp = ar[i];
        j = i - 1;

        // Move elements of ar[0..i-1] that are greater than temp
        while (j >= 0 && ar[j] > temp)
        {
            ar[j + 1] = ar[j];
            j--;
        }
        ar[j + 1] = temp;
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

    insertion_sort(ar, n);

    printf("Sorted array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }

    printf("\n");
    return 0;
}
