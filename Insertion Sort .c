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

    // Insertion Sort Algorithm
    clock_t start = clock();
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
