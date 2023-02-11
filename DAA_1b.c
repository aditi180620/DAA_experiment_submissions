#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include <math.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) 
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) 
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
  

void selectionSort(int arr[],int n)
{
   
    for(int i=0;i<n-1;i++)
    {  
        int minIndex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minIndex])
            {
                minIndex=j;
            }
        }
        swap(&arr[minIndex],&arr[i]);
    }
   
   
}

int main()
{
   FILE* ptr;
 
    // file in reading mode
    ptr = fopen("inputRandom.txt", "r");
 
    if (NULL == ptr)
    {
        printf("Error in opening file!\n");
    }
   
    int block=1, size=100;
    while(block<=1000)
    {
      int data[size];
      for(int i=0;i<size;i++)
     {
        fscanf(ptr,"%d ",&data[i]);
     }
     
     clock_t t;
     t = clock();
     insertionSort(data,size);
   
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    printf("\n  %d    %f",block,time_taken);
   
    size=size+100;
    block++;
    fseek(ptr,0,SEEK_SET); //moving cursor again to start pointer of txt file
       
    }
   
     fclose(ptr);
       
}
