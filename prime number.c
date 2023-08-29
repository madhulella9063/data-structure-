#include<stdio.h>
int main()
{
	int i,n,p=0;
	printf("\nenter the num : ");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		p++;
	}
	if(p==1)
	printf("\nit is prime %d");
	else
	printf("\nit is not ");
}

//Sum of digits : 

#include<stdio.h>
int main()
{
	int n,rem,sum=0,i;
	printf("\nenter the num : ");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		sum+=rem;
		n/=10;
	}
	printf("%d",sum);
}


