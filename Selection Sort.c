#include <stdio.h>

int main() 
{
    int n;

    printf("\n\n Enter the number of elements: ");
    scanf("%d", &n);
    
    int a[n];

    for (int i = 0; i < n; ++i) 
    {
        printf("\n Enter element %d : ", i+1);
        scanf("%d", &a[i]);
    }
    
    printf("\n input array is : [ ");
    for (int i = 0; i < n; ++i) 
    {
        printf(" %d ", a[i]);
    }
    printf(" ] ");

    // Selection Sort Algorithm
    for (int i = 0; i < n - 1; i++) 
    {
        int p = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[p]) 
            {
                p = j;
            }
        }
        // Swap the found minimum element with the first element
        int temp = a[i];
        a[i] = a[p];
        a[p] = temp;
    }

    // Display the sorted array
    printf("\n Sorted array is : [ ");
    for (int i = 0; i < n; ++i) 
    {
        printf(" %d ", a[i]);
    }
    printf(" ] ");
    
    return 0;
}
