/*
  			loop
  			1) Entry control loop -> i) for loop, ii) while loop
  			
  			2) Exit control loop -> i) do-while loop

*/

/*While loop
Syntax: 
while(condition)
{
 //Body
}
*/

//Write a c program to print 1 to 100 using while loop

#include <stdio.h>
int main()
{
	int i = 1, n = 100;
	char ch;
	printf("\nDo you want to see your name ? (y/n) : ");
	scanf("%c",&ch);
	while(ch == 'y')
	{
		fflush(stdin);
		printf("\nRaja");
		printf("\nDo you want to see your name again ? (y/n) : ");
		scanf("%c",&ch);
	}
	return 0;
}
