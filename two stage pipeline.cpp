#include<stdio.h>
int main()
{
	int counter = 1,a,b,choice,res,ins;
	printf("enter number1.");
	scanf("%d",&a);
	printf("enter number2.");
	scanf("%d",&b);
	counter = counter+1;
	printf("1-addition:\n2-subtractor:\n3-multipication:\n4-devision:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: printf("performming addition\n");
		res=a+b;
		counter=counter+1;
		break;
		case 2:printf("performing subtractor\n");
		res=a-b;
		counter=counter+1;
		break;
		case 3: printf("performing multiplication\n");
		res=a*b;
		counter = counter+1;
		break;
		case 4: printf("performing devision\n");
		res = a/b;
		counter = counter +1;
		break;
	}
	printf("the cycle value is:%d\n",counter);
	printf("enter the number of instructions:");
	scanf("%d",&ins);
	int performance_measure= ins/counter;
	printf("the performmance measure is :%d\n",performance_measure);
	return 0;
}

