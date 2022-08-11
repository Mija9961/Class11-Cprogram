/*Write a c program to draw the following pattern where the number of rows given as 
user input.
For intput = 4
A
B C
D E F
G H I J

*/

#include <stdio.h>

int main()
{
	int i, j, n, k = 0;
	printf("\nHow many rows ? ");
	scanf("%d",&n);
	for(i = 1; i <= n; i = i+1) //For indicating rows
	{
		for(j = 1; j <= i; j++)//For printing the values
		{
			printf("%c ",(k%26)+65);
			k++;
			
		}
		
		printf("\n");
	}
	return 0;	
}






