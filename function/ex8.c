#include<stdio.h>
//function declaration
void swap();

int main()
{
	//function call
	swap();
	return 0;
}
//function definition
swap()
{
	int x, y, temp;
	
	//input first number
	printf("Enter first number:");
	scanf("%d", &x);
	
	//input second number
	printf("Enter Second number:");
	scanf("%d", &y);
	
	printf("\n\nBefore swap:");
	printf("\nx = %d\ny = %d\n", x, y);
	
	//operation here....
		temp = x;
		x = y;
		y = temp;
	
	printf("\nAfter swap:");
	printf("\nx = %d\ny = %d\n", x, y);
}
