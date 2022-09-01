/* write a c program to print all numbers between 1 to 100 which is not 
divisible by 3 and 5
*/
#include <stdio.h>
int main()
{
	int i, n = 100;
	for(i = 1; i <= n; i++)
	{
		 if(i % 3 == 0 && i % 5 == 0)
		 {
		 	continue;
		 }
		 printf("%d ",i);
	}
	return 0;
}
