#include <stdio.h>
#define max_size 150
int binarysearch(int ar[], int lb, int ub, int target)
{
    while (lb <= ub)
    {
        int mid = (lb + ub) / 2;
        if (ar[mid] == target)
        {
            printf("%d is found at index %d ", target, mid);
            return mid;
        }
        if (ar[mid] < target)
        {
            lb = mid + 1;
        }
        else
        {
            ub = mid - 1;
        }
    }
    printf("%d is not available in the array.", target);
}
void bubblesort(int ar[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (ar[j] > ar[i])
            {
                temp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = temp;
            }
        }
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
    int ar[max_size], n, target;
    printf("enter number of elements:");
    scanf("%d", &n);
    printf("enter array elements:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    bubblesort(ar, n);
    printf("sorted elements are: ");
    display(ar, n);
    printf("\n enter your target number:");
    scanf("%d", &target);
    binarysearch(ar, 0, n - 1, target);
    return 0;
}