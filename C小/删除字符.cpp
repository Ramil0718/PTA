#include <stdio.h>
#define MAXN 20

void delchar(char *str,char c)
{
	char *p=str; //定义指针p，让其指向str，也就是指向主程序的str数组，所以现在p指针的改变，主程序的str数组也会改变
	/*思路：遍历，只要不等于要删除字符的字符都赋值给p指针*/
 	for ( ;*str!='\0';str++)
 	{
 		if (*str!=c)
 		{
 			*p=*str; //赋值
 			p++; //p指针加加，使其指向下一位
 		}
 	} 
 	*p=*str; //由于字符串结尾有\0，for循环当中到\0就结束了，所以循环结束后，需要把\0赋值到p指针里面
}

void ReadString( char s[] ); /* 由裁判实现，略去不表 */

int main()
{
    char str[MAXN], c;

    scanf("%c\n", &c);
    //ReadString(str);
    delchar(str, c);
    printf("%s\n", str);
    
    return 0;
}

/* 你的代码将被嵌在这里 */

