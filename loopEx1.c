/*Write a c program to take a range and then say whether there is any
 number divisible by 3, 5 in that range
 */
 
#include <stdio.h>
int main()
{
	int a, b, i, flag = 0, temp;
	printf("Enter the range : ");
	scanf("%d%d",&a,&b);
	if(a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	for(i = a; i <= b; i++)
	{
		if(i % 3 == 0 &&  i % 5 == 0)
		{
			flag = 1;
			break;
		}
	}
	if(flag == 0)
	{
		printf("No");
	}
	else{
		printf("Yes");
	}
	return 0;
}
