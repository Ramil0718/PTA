#include <stdio.h>
#define MAXS 20

void f( char *p )
{
	char *str;
	int n=strlen(p);
	str=n;
	for(int i=n;i>0;i--)
	{
		*str=*p;
		str--;
		p++;
	}
}

void ReadString( char *s ); /* 由裁判实现，略去不表 */

int main()
{
    char s[MAXS];
    
    ReadString(s);
    f(s);
    printf("%s\n", s);
    
    return 0;
}

/* 你的代码将被嵌在这里 */

