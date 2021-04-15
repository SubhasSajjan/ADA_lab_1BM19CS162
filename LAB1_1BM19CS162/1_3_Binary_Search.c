#include<stdio.h>
int binarysearch(int arr[],int key,int n1,int n2)
{
    int mid = n2/2;
    if (arr[mid] == key)
        printf("Key id found in position of %d",mid);
    if (arr[mid]<key)
        return binarysearch(arr,key,n1 ,mid);
    if (arr[mid]>key)
        return binarysearch(arr,key,mid,n2);
}
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;


    for (i = 0; i < n-1; i++)
    {

        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;


        swap(&arr[min_idx], &arr[i]);
    }
}

int main()
{   int i,n,key;
      printf("enter the size of array: \n");
      scanf("%d",&n);
    int arr[n] ;

    printf("Enter the elements to the array: \n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    selectionSort(arr,n);
    printf("Enter the key element to search");
    scanf("%d",&key);
    binarysearch(arr,key,0 ,n);


}
