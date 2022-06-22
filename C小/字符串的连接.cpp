#include <stdio.h>
#include <string.h>

#define MAXS 10

char *str_cat( char *s, char *t )
{
	int m=strlen(s);//原数组的长度 
	int n=strlen(t);//要加进去的长度 
	for(int i=0;i<n;i++)
	{
		*(s+m+i)=*(t+i);//s位之后接上t的内容 
	}
	return s;//返回s的首地址 
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

/* 你的代码将被嵌在这里 */

