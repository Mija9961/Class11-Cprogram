//Write a c program to print an integer in reverse order

#include <stdio.h>
int main()
{
	int n, rem;
	printf("\nEnter a positive integer : ");
	scanf("%d",&n);
	
	while(n != 0)
	{
		rem = n % 10;
		printf("%d",rem);
		n = n / 10;
	}
	return 0;
}
