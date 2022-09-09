#include<stdio.h>

void Swap(int*, int*);
void Sort(int[], int);
void PrintArray(int[], int);

int main()
{
    int arr[10], n, i;

    printf("Enter the number of integers :");
    scanf("%d", &n);

    printf("\nEnter %d integers:\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\n\nUnsorted integers:\n");
    PrintArray(arr, n);

    Sort(arr, n);

    printf("\n\nSorted integers:\n");
    PrintArray(arr, n);

    return 0;
}

void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Sort(int arr[], int size)
{
    int i, j;

    for(i=0; i<size-1; i++)
    for(j=0; j<size-i-1; j++)
        if(arr[j] > arr[j+1])
            Swap(&arr[j], &arr[j+1]);
}

void PrintArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%d - ", arr[i]);
    }
}
