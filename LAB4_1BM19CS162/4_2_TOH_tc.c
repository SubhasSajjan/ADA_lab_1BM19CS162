
#include <stdio.h>
#include <time.h>
void towerOfHanoi(int n,char from_rod,char to_rod,char aux_rod){
    if(n==1){
        printf("move disk from %c to %c\n",from_rod,to_rod);
        return;
    }
    towerOfHanoi(n-1 , from_rod, aux_rod, to_rod);
    printf("move disk from %c to %c\n",from_rod,to_rod);
    towerOfHanoi(n-1, aux_rod, to_rod, from_rod);
}
int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    clock_t start, end;
    for(;;){
    printf("Enter the number of pegs in TOH:");
    scanf("%d",&n);

     start = clock();
    towerOfHanoi(n,'a','c','b');
    end = clock();

      printf("\ntime required is %.8f\n",((double)(end-start)/CLOCKS_PER_SEC));}
    return 0;
}
