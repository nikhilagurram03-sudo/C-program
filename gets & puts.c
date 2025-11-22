//program to read a string using gets & puts function
#include<string.h>
#include<stdio.h>
int main()
{
	char name[20];
	printf("enter your name");
	gets(name);
	printf("my name is :\n");
	puts(name);
}
