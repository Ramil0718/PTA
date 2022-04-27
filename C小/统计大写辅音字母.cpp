#include<stdio.h>

int main()
{
	int cnt=0;
	char n;
	do
	{
		scanf("%c",&n);
		if('A'<=n&&n<='Z')
		{
			cnt++;
			if(n=='A'||n=='E'||n=='I'||n=='O'||n=='U')
				cnt--;
		}
	}while(n!='\n');
	printf("%d",cnt);
}
