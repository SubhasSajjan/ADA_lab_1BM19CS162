#include<stdio.h>
#include<time.h>

void selection_sort_asc(int arr[],int n)
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
    void selection_sort_des(int arr[],int n)
{
    int i,j,max,temp;


    for(int i =0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
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
    int arr[100000],arr1[100000];
    int n;
    clock_t start,end;
    for(int k = 0;;k++){
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter elements to array:\n");
    for(int i=0;i<n;i++)
    {
       arr[i] = rand();

    }

    selection_sort_des(arr,n);
    for(int i=0;i<n;i++)
    {
       arr1[i] = arr[i];

    }
     start = clock();
    selection_sort_asc(arr1,n);
    end = clock();


      printf("Sorted array is:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d \t\t",arr[i]);
         printf("%d \n",arr1[i]);

    }
     printf("time required is %.8f\n",((double)(end-start)/CLOCKS_PER_SEC));
}
}

