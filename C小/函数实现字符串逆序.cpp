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

void ReadString( char *s ); /* �ɲ���ʵ�֣���ȥ���� */

int main()
{
    char s[MAXS];
    
    ReadString(s);
    f(s);
    printf("%s\n", s);
    
    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */

