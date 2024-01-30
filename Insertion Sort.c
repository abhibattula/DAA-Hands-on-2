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

    // Insertion Sort Algorithm
    for (int i = 1; i < n; i++) 
    {
        int key = a[i];
        int j = i - 1;
        
        // Move elements of a[0..i-1], that are greater than key, to one position ahead of their current position
        while (j >= 0 && a[j] > key) 
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
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
