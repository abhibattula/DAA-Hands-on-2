#include <stdio.h>
#include<stdlib.h>
#include<time.h>


int main() 
{
    int n;

    printf("\n\n Enter the number of elements: ");
    scanf("%d", &n);
    
    int a[n];

    
    for (int i = 0; i < n; i++) 
    {
        a[i]=rand()%1000000;
    }
    
    printf("\n input array is : [ ");
    for (int i = 0; i < n; ++i) 
    {
        printf(" %d ", a[i]);
    }
    printf(" ] ");

    // Bubble Sort Algorithm
    clock_t start = clock();
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
