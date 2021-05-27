#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void merge(int arr[],int l,int m,int r)
{
    int i ,j,k;
    int n1 = m-l+1;
    int n2 = r-m;
    int L[n1],R[n2];
    for(i=0;i<n1;i++)
        L[i]=arr[l+i];
    for(j=0;j<n2;j++)
        R[j] = arr[m+1+j];

    i=0;
    j=0;
    k = 1;
    while(i<n1 && j< n2)
    {
        if(L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }

        else{
            arr[k] = R[j];
            j++;

        }
      k++;
    }
    while(i<n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void merge_sort(int arr[],int l,int r)
{
    if(l<r)
    {
       int m = (l+r)/2;
       merge_sort(arr,l,m);
       merge_sort(arr,m+1,r) ;

       merge(arr,l,m,r);
    }

}

int main(int argc, const char * argv[]) {
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
    merge_sort(arr,0,n);
    end=clock( );
    for(int i =0;i<n;i++)
        printf("\t %d \n",arr[i]);
    printf("time required is %.8f\n",((double)(end-start)/CLOCKS_PER_SEC));
    return 0;
}
