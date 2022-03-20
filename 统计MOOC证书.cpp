#include<stdio.h>
int main(void)
{  
	int n;
	int n1=0,n2=0,n3=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		int grade;
		scanf("%d",&grade);
		if(grade>=85)
			n1++;
		else if(60<=grade&&grade<85)
			n2++;
		else
			n3++;
	}
	printf("%d %d %d",n1,n2,n3);
}

