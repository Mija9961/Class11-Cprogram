/*Write a c program to draw the following pattern where the number of rows given as 
user input.
For input = 4
* * * *
* * * *
* * * *
* * * *

*/

#include <stdio.h>

int main()
{
	int i, j, n;
	printf("\nHow many rows ? ");
	scanf("%d",&n);
	for(i = 1; i <= n; i = i+1) //For indicating rows
	{
		for(j = 1; j <= n; j++)//For printing the value of *
		{
			printf("* ");
		}
		
		printf("\n");
	}
	return 0;	
}






