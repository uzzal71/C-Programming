#include<stdio.h>

//function declaration
int square();
int area();

int main()
{
	//function call
	square();
	area();
	return 0;
}

//This segment help us to find the square of a number

square()
{
	int length, squeare;
	
	//input length
	printf("Enter length:");
	scanf("%d", &length);
	
	//operation....
		squeare = length * length;
		
	printf("\nSquare is = %d\n", squeare);
	printf("=================================\n");
}

//This segment help us to find the area of a circle
area()
{
	int length;
	float PI = 3.1416, area;
	
	//input length
	printf("Enter length:");
	scanf("%d", &length);
	
	//operation....
		area = PI*(length * length);
		
	printf("\nArea is = %f\n", area);
}
