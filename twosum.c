#include <stdio.h>
#include <stdlib.h>
#define MAX 10000


void findPair(int *arr, int size, int sum)
{
int index, temp;
int hash[MAX] = {0};
    
for(index = 0; index <size; index++)
{
temp = sum - arr[index];
if(temp >= 0 && hash[temp] == 1) 
printf("the pair with sum %d is (%d,%d)",sum,arr[index],temp);
hash[arr[index]] = 1;
}
}
int main()
{
int size,index,sum,*arr;
printf("Enter the Size of the array\n");
scanf("%d",&size);

arr = (int *) malloc(sizeof(int) * size);
printf("enter elements into array\n");
for(index = 0; index < size ; index++) 
scanf("%d",&arr[index]);
    
printf("enter sum\n");
scanf("%d",&sum);
    
   
    
findPair(arr,size,sum);
return 0;
}
