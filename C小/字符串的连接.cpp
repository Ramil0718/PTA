#include <stdio.h>
#include <string.h>

#define MAXS 10

char *str_cat( char *s, char *t )
{
	int m=strlen(s);//ԭ����ĳ��� 
	int n=strlen(t);//Ҫ�ӽ�ȥ�ĳ��� 
	for(int i=0;i<n;i++)
	{
		*(s+m+i)=*(t+i);//sλ֮�����t������ 
	}
	return s;//����s���׵�ַ 
}

int main()
{
    char *p;
    char str1[MAXS+MAXS] = {'\0'}, str2[MAXS] = {'\0'};
    
    scanf("%s%s", str1, str2);
    p = str_cat(str1, str2);
    printf("%s\n%s\n", p, str1);
    
    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */

