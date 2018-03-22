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
	brazil();
	argentina();
	return 0;
}

//function definition
italy() {
	printf("I am Italy\n");	
}

brazil() {
	printf("I am Brazil\n");	
}

argentina() {
	printf("I am Argentina\n");
}

