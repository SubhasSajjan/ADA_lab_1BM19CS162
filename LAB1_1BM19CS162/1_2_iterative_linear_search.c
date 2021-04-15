#include<stdio.h>
int main()
{
    int arr[10],i,n,key,flag=0;
    printf("Enter the number of elements in array:");
    scanf("%d",&n);
    printf("Enter the elemnts to array:\n");
    for(i=0;i<n;i++)
    {

        scanf("%d",&arr[i])
    ;}
    printf("Enter the elemnts need to be found:\n");
    scanf("%d",&key);\
     for(i=0;i<n;i++)
    {
        if(arr[i]==key){
              printf("Key found in position %d/n",i);
              flag=1;

        }

        }
if(flag==0)
    printf("key not found in list");
}
