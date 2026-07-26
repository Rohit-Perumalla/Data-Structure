#include <stdio.h>
#define maxsize 100
void merge(int ar[], int lb, int mid, int ub);
void mergesort(int ar[], int lb, int ub)
{
    if (lb < ub)
    {
        int mid = lb+(ub-lb)/ 2;
        mergesort(ar, lb, mid);
        mergesort(ar, mid + 1, ub);
        merge(ar, lb, mid, ub);
    }
}
void merge(int ar[], int lb, int mid, int ub)
{
    int n1 = mid - lb + 1;
    int n2 = ub - mid;
    int l[n1], r[n2];

    for (int i = 0; i < n1; i++)
    {
        l[i] = ar[lb + i];
    }
    for (int j = 0; j < n2; j++)
    {
        r[j] = ar[mid + 1 + j];
    }
    int i = 0, j = 0, k = lb;
    while (i < n1 && j < n2)
    {
        if (l[i] <= r[j])
        {
            ar[k] = l[i];
            i++;
        }
        else
        {
            ar[k] = r[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        ar[k] = l[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        ar[k] = r[j];
        j++;
        k++;
    }
}
int main()
{
    int ar[maxsize], n;
    printf("enter number of elements:");
    scanf("%d", &n);
    printf("enter %d elemnets :\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    mergesort(ar, 0, n - 1);
    printf("sorted array:\n");
    for (int j = 0; j < n; j++)
    {
        printf("%d ", ar[j]);
    }
    printf("\n");
    return 0;
}
