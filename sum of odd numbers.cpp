#include <stdio.h>

int main() 
{
    int a,sum = 0,min_ran;
    printf("enter the maximum range:");
    scanf("%d",&a);

    for(min_ran;min_ran<=a;min_ran=min_ran+2)
    {
    	sum = sum + min_ran ;
	}
	printf("%d",sum);
}
