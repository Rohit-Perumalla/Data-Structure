// Quick Sort Code
#include <stdio.h>
#define MAX 100
void quicksort(int ar[], int low, int high)
{
    if (low < high)
    {
        int pivot = ar[high];
        int i = (low - 1), temp;
        for (int j = low; j < high; j++)
        {
            if (ar[j] < pivot)
            {
                i++;
                temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
        temp = ar[i + 1];
        ar[i + 1] = ar[high];
        ar[high] = temp;

        int pi = i + 1;
        quicksort(ar, low, pi - 1);
        quicksort(ar, pi + 1, high);
    }
}
void display(int ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
}

int main()
{
    int ar[MAX], n;
    printf("enter the no.of elements:");
    scanf("%d", &n);
    printf("enter elements:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    printf("after sorting values are:");
    quicksort(ar, 0, n - 1);
    display(ar, n);
    return 0;
}