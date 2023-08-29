#include<stdio.h>
int main()
{
int arr[10],i,array;
printf("enter any 10 arr elements:");
for(i=0;i<10;i++)
scanf("%d",&arr[i]);
printf("\n odd array elements:");
for(i=0;i<10;i++)
if (arr[i]%2!=0)
{
	
	printf("%d",arr[i]);
}

return 0;
}
