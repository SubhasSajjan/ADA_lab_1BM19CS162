#include<stdio.h>
#include<time.h>



void selection_sort(int arr[],int n)
{

     int i,j,min,temp;


    for(int i =0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

            }
        }
    }
}


int main()
{

    clock_t start, end;


for(;;){

    int arr[100000];
    int n;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter elements to array:\n");
    for(int i=0;i<n;i++)
    {
        arr[i] = rand();

    }

  start = clock();
    selection_sort(arr,n);
    end = clock();

    //  double time = (double)(stop - start) / CLOCKS_PER_SEC;

    printf("Sorted array is:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);

    }
   printf("time required is %.8f\n",((double)(end-start)/CLOCKS_PER_SEC));
}
}
