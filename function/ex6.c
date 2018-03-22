#include<stdio.h>

//function declaration
void message1();
void message2();  

int main()
{
	//function calling
	message1();
	message2(); 
}

//function definition
message2() {
	printf ( "Message two\n" ) ; 	
}

message1() {
	printf ( "Message one\n" ) ; 	
}

