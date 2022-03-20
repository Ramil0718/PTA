#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	if(n<38)
		printf("Too small!");
	else if(n==38)
		printf("Good Guess!");
	else
		printf("Too big!");
}
