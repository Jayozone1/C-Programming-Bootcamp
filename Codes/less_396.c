#include <stdio.h>
#include <stdlib.h>


// Receive 2 Arrays of the same size
// Swap between their values one-by-one --> o(n)

#define SIZE 5

void swap(int *val1, int *val2)
{
    int temp;
    temp = *val1;
    *val1 = *val2;
    *val2 = temp;
}

void swapArrayON(int *arr1, int *arr2)
{
    int i;
    for (i=0; i<SIZE; i++)
        swap(&arr1[i], &arr2[i]);
}

void swapArray01(void **ptr1, int **ptr2)
{
    int *temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp; 
}

void printArr(int *arr)
{
    int i;
    for(i=0; i<SIZE; i++)
        printf("%d", arr[i]);
    printf("\n");
}

int *generateArray(int size)
{
    int i;
    int *arr;
    arr = (int*)malloc(size*sizeof(int));
    for (i=0; i<size; i++)
        scanf("%d", &arr[i]);
    return arr;
    
}


int main()
{
   int *Arr1, *Arr2;
   int *Arr1, *Arr2;

   printf("Enter size for Array1: ");
   scanf("%d", &sizeArr1);
   printf("Enter size for Array2: ");
   scanf("%d", &sizeArr2);

   swapArray01(&Arr1, &Arr2);
   
   Arr1 = generateArray(sizeArr1);
   Arr2 = generateArray(sizeArr2);



    printf("Array values before swap\n");
    printArr(Array1);
    printArr(Array2);
    swapArrayON(Array1, Array2);
    printf("\n");
    printf("Array values AFTER swap\n");
    printArr(Array1);
    printArr(Array2);
    return 0;
} 

