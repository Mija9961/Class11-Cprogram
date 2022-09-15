//Write a c program to print all twin primes between 1 and 100

#include <stdio.h>

int isPrime(int n)
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
		return 1;//Return  if prime
	}
	else
	{
		return 0;//Return 0 if not prime
	}
}
int main()
{
	int i, n = 100, temp;
	
	for(i = 2; i <= n-2; i++)
	{
		if(isPrime(i) == 1)
		{
			temp = i+2;
			if(isPrime(temp) == 1)
			{
				printf("[%d, %d] ",i,temp);
			}
		}
	}
}
