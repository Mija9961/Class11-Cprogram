/*Write a c program to draw the following pattern where the number of rows given as 
user input.
For input = 4
1
2 2
3 3 3
4 4 4 4
...
*/

#include <stdio.h>

int main()
{
	int i, j, n;
	printf("\nHow many rows ? ");
	scanf("%d",&n);
	for(i = 1; i <= n; i = i+1) //For indicating rows
	{
		for(j = 1; j <= i; j++)//For printing the values
		{
			printf("%d ",i);
		}
		
		printf("\n");
	}
	return 0;	
}






