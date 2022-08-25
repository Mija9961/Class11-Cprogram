#include <stdio.h>
int main()
{
	int i, n = 20, flag = 0;
	for(i = 1; i <= n; i++)
	{
		if(i % 3 == 0 && i % 7 == 0)
		{
	 	 flag = 1;
		 break;
		}	
	}
	if(flag == 1)
	{
		printf("YES");
	}
	else{
		printf("NO");
	}
	return 0;
}
