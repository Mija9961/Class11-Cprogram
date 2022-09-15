/*Function
1. no return no argument // Example: void func1(void)
2. no return with argument // void func2(int)
3. with return no argument // int func3(void)
4. with return with agrument //int func4(int)
*/

//Example of no return no argument

/*Declaration of function
return_type func_name(data_type arg1, data_type arg2, ...)
*/
//Function definition
/*return_type func_name(data_type para1, data_type para2, ...)
{
	//body
}
*/
//Write a c program to print your name using a function

#include <stdio.h>

//Example of no return no argument function
void printAddress()
{
	printf("Rajesh");
	printf("\n80A Vivekananda Road, Kol-700006");
}

//Example of no return with argument function

void evenOddCheck(int n)
{
	if(n % 2 == 0)
	{
		printf("%d is even",n);
	}
	else
	{
		printf("%d is odd",n);
	}
}

//Example of with return with argument function

int isEven(int n)
{
	if(n % 2 == 0)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}

//Example of with return no argument function

int getNumAndSayIsEven()
{
	int n;
	printf("Enter a positive integer : ");
	scanf("%d",&n);
	if(n % 2 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
//	printAddress(); //Function calling
//	int num;
//	printf("Enter a positive integer : ");
//	scanf("%d",&num);
	//evenOddCheck(num);//Function calling
//	if(isEven(num) == 1)
//	{
//		printf("%d is even",num);
//	}
//	else
//	{
//		printf("%d is odd",num);
//	}
	if(getNumAndSayIsEven() == 1)
	{
		printf("The number is even");
	}
	else
	{
		printf("The number is odd");
	}
	return 0;
}


