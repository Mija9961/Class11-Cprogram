//Write a c program to check whether a given integer is palindrome or not

#include <stdio.h>
int main()
{
	int n, rem, rev = 0, temp;
	printf("\nEnter a positive integer : ");
	scanf("%d",&n);
	temp = n;
	while(temp != 0)
	{
		rem = temp % 10;
		rev = rev * 10 + rem;
		temp = temp / 10;
	}
	
	if(rev == n)
	{
		printf("%d is palindrome",n);
	}
	else
	{
		printf("%d is not palindrome",n);
	}
	return 0;
}
