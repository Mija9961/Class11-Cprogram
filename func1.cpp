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

void printAddress(void)
{
	printf("Rajesh");
	printf("\n80A Vivekananda Road, Kol-700006");
	
}

int main()
{
	printAddress(); //Function calling
	return 0;
}


