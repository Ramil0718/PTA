#include <stdio.h>
#define MAXN 20

void strmcpy( char *t, int m, char *s )
{
	int index = 0;

	// 因数组下标从0开始，故m需要减1
	// 例：字符串"happy new year"中，第七个字符是n，但其数组下标为8
	m--;

	for (m; *(t+m) != '\0'; m++)
	{
		*(s + index) = *(t + m);
		index++;
	}

	// 将字符串结束符存入字符串尾
	*(s + index) = '\0';
}
void ReadString( char s[] ); /* 由裁判实现，略去不表 */

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

/* 你的代码将被嵌在这里 */

