#include <stdio.h>
#define MAXN 20

void strmcpy( char *t, int m, char *s )
{
	int index = 0;

	// �������±��0��ʼ����m��Ҫ��1
	// �����ַ���"happy new year"�У����߸��ַ���n�����������±�Ϊ8
	m--;

	for (m; *(t+m) != '\0'; m++)
	{
		*(s + index) = *(t + m);
		index++;
	}

	// ���ַ��������������ַ���β
	*(s + index) = '\0';
}
void ReadString( char s[] ); /* �ɲ���ʵ�֣���ȥ���� */

int main()
{
    char t[MAXN], s[MAXN];
    int m;
    
    scanf("%d\n", &m);
    ReadString(t);
    strmcpy( t, m, s );
    printf("%s\n", s);

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */

