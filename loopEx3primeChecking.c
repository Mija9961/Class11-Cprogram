//Write a c program to check whether a given number is prime or not

#include <stdio.h>

void isPrime(int n)
{
	int i, flag = 0;
	for(i = 2; i <= n/2; i++)
	{
		if(n % i == 0)
		{
			flag = 1;
			break;
		}
	}
	
	if(flag == 0)
	{
		printf("%d ",n);
	//	return 1;
	}
//	else
//	{
//	//	printf("\n%d is not prime",n);
//		return 0;
//	}
}
int main()
{
	int n, i, flag = 0;
//	printf("\nEnter an integer : ");
//	scanf("%d",&n);
	for(i = 2; i <= 100; i++)
	{
		isPrime(i);
	}
	return 0;
}
