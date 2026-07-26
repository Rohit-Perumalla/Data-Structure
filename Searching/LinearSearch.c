#include<stdio.h>
#define max_size 300
int linearsearch(int ar[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == target)
        {
            printf("%d is found at index %d ", target, i);
            return i;
        }
    }
    printf("%d is not available in the array ", target);
    return -1;
}
int main()
{
    int ar[max_size], n, target;
    printf("enter number of elements: ");
    scanf("%d", &n);
    printf("enter array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    printf("enter your target number:");
    scanf("%d", &target);
    linearsearch(ar, n, target);
    return 0;
}
