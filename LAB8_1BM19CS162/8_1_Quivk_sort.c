#include<stdio.h>
#include<time.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int arr[],int l , int r)
{
    int pivot = arr[r];
    int i = l - 1;
    for(int j = l ; j <= r ; j++)
    {
        if(arr[j] < pivot )
        {
            i++;
            swap (&arr[i],&arr[j]);
        }

    }
    swap(&arr[i+1],&arr[r]);
    return(i+1);
}
void quick_sort(int arr[],int l , int r)
{
    if(l<r)
    {
        int pi = partition(arr,l,r);

        quick_sort(arr , l ,pi-1);
        quick_sort(arr , pi+1 , r);

    }
}
int main()
{
  clock_t start,end;
    int n,arr[100];
    // insert code here...
    printf("enter the number of elements in the array :");
    scanf("%d",& n);
    printf("enter the elements of the array :\n");
    for(int i=0;i<n;i++){
        arr[i]=rand();
    }
    printf("elements are initialized in array\n");
    printf("merge sort :\n");
    start=clock( );
    quick_sort(arr,0,n);
    end=clock( );
    for(int i =0;i<n;i++)
        printf("\t %d \n",arr[i]);
    printf("time required is %.8f\n",((double)(end-start)/CLOCKS_PER_SEC));
    return 0;

}

