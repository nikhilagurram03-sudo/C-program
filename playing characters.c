#include<stdio.h>
int main()
{
	char sen[100];
	printf("enter a sentence");
	scanf("%[^\n]%*c",&sen);
	printf(sen);
}
