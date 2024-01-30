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

    // Bubble Sort Algorithm
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1;j++) 
        {
            // Swap if the current element is greater than the next element
            if (a[j] > a[j + 1]) 
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // Display the sorted array
    printf("\n Sorted array is : [ ");
    for (int i = 0; i < n; ++i) 
    {
        printf(" %d ", a[i]);
    }
    printf(" ] ");
}
