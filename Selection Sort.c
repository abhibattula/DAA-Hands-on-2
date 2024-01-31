#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main() 
{
    int n;

    printf("\n\n Enter the number of elements: ");
    scanf("%d", &n);
    
    int a[n];

    for (int i = 0; i < n; ++i) 
    {
        a[i]=rand()%1000000;
    }
    
    printf("\n input array is : [ ");
    for (int i = 0; i < n; ++i) 
    {
        printf(" %d ", a[i]);
    }
    printf(" ] ");

    // Selection Sort Algorithm
    clock_t start = clock();
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
    clock_t end = clock();

    // Display the sorted array
    printf("\n Sorted array is : [ ");
    for (int i = 0; i < n; ++i) 
    {
        printf(" %d ", a[i]);
    }
    printf(" ] ");
    double time_taken = ((double)end - start) / CLOCKS_PER_SEC;
    printf("\n Time taken: %f seconds", time_taken);
}
