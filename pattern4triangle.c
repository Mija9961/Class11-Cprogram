/*Write a c program to draw the following pattern where the number of rows given as 
user input.
For intput = 4
1
2 3
4 5 6
7 8 9 10

*/

#include <stdio.h>

int main()
{
	int i, j, n, k = 1;
	printf("\nHow many rows ? ");
	scanf("%d",&n);
	for(i = 1; i <= n; i = i+1) //For indicating rows
	{
		for(j = 1; j <= i; j++)//For printing the values
		{
			printf("%d ",k);
			k++;
		}
		
		printf("\n");
	}
	return 0;	
}






