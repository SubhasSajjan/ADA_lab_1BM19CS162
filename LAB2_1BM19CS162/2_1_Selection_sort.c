#include<stdio.h>


void selection_sort(int arr[],int n)
{
    int i,j,min,temp;

    for( i=0;i<n-1;i++)
    {
        min = i;
        for(j = i;j<n;j++)
        {

            if(arr[j]<arr[i])
            {
                min = j;
            }
        }
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}
int main()
{
    int arr[100];
    int n;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter elements to array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }

    selection_sort(arr,n);
printf("Sorted array is:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d \n",arr[i]);

    }
}
