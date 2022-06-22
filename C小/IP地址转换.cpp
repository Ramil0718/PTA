#include <stdio.h>

int main()

{
	int a[]={128,64,32,16,8,4,2,1};
	char ch[33];
	int i=0,sum=0;
	gets(ch);
	while(ch[i])
	{
		sum+=(ch[i]-'0')*a[i%8];
		i++;
		if(i%8==0)
		{
			if(i!=8)
				printf(".");
			printf("%d",sum);
			sum=0;
		}
	}
}
