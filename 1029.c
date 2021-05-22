#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int twoCitySchedCost(int** costs, int costsSize, int* costsColSize){
    int sum;
    int arr[costsSize];
    
    sum = 0;
    for(int i = 0; i < costsSize; i++) //전체
    {
        sum += costs[i][0];
        arr[i] = costs[i][1] - costs[i][0]; // A도시 비용 - B도시 비용
    }
    
    qsort(arr, costsSize, sizeof(int), compare);
    
    for(int i = 0; i < costsSize/2; i++) //각 도시 n
        sum += arr[i];
    
    return sum;
}
