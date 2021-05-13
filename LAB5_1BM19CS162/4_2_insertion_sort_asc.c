#include<stdio.h>
#include<time.h>

void insertion_sort(int arr[],int n)
{ int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
int main()
{
    int arr[100000],arr1[100000];
    int n;
    clock_t start,end;
    for(;;)
{    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter elements to array:\n");
    for(int i=0;i<n;i++)
    {
        arr[i] = rand();

    }
     insertion_sort(arr,n);
    for(int i=0;i<n;i++)
    {
        arr1[i] = arr[i];

    }
     start = clock();
    insertion_sort(arr1,n);
    end = clock();


printf("Sorted array is:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d \n",arr[i]);

    }
      printf("time required is %.8f\n",((double)(end-start)/CLOCKS_PER_SEC));
}
}
