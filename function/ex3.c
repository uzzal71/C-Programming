#include<stdio.h>

//function declaration
void italy();
void brazil();
void argentina(); 

int main()
{
	printf("I am main function\n");
	//function calling
	italy();
	printf("\nI am finaly back main function\n");
	return 0;
}

//function definition
italy() {
	printf("I am Italy\n");	
	brazil();
	argentina();
}

brazil() {
	printf("I am Brazil\n");
	argentina();	
}

argentina() {
	printf("I am Argentina\n");
}

