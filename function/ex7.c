/* Sending and receiving values between functions */ 
#include<stdio.h>

int calsum(int a, int b, int c);

int main()
{
	int a, b, c, sum;
	printf("Enter three number:");
	scanf("%d%d%d", &a, &b, &c);
	
	//function call
	sum = calsum(a, b, c);
	printf("Sum = %d", sum);
	
	return 0;
}

//function definition
calsum(x, y, z)
int x, y, z;
{
	int d;
		d = x + y + z;
	return(d);
}
