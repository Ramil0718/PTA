#include <stdio.h>
#define MAXN 20

void delchar(char *str,char c)
{
	char *p=str; //����ָ��p������ָ��str��Ҳ����ָ���������str���飬��������pָ��ĸı䣬�������str����Ҳ��ı�
	/*˼·��������ֻҪ������Ҫɾ���ַ����ַ�����ֵ��pָ��*/
 	for ( ;*str!='\0';str++)
 	{
 		if (*str!=c)
 		{
 			*p=*str; //��ֵ
 			p++; //pָ��Ӽӣ�ʹ��ָ����һλ
 		}
 	} 
 	*p=*str; //�����ַ�����β��\0��forѭ�����е�\0�ͽ����ˣ�����ѭ����������Ҫ��\0��ֵ��pָ������
}

void ReadString( char s[] ); /* �ɲ���ʵ�֣���ȥ���� */

int main()
{
    char str[MAXN], c;

    scanf("%c\n", &c);
    //ReadString(str);
    delchar(str, c);
    printf("%s\n", str);
    
    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */

