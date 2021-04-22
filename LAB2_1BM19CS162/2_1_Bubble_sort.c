#include<stdio.h>

void bubble_sort(int arr[],int n)
{
    int temp;
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
    int arr[100];
    int n;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter elements to array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }

    bubble_sort(arr,n);
printf("Sorted array is:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);

    }
}
