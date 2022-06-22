#include <stdio.h>
#define MAXN 10

int search( int list[], int n, int x )
{
	int index=-1;
	for(int i=0;i<n;i++)//i<=n的话最后一位默认为0样例2过不了 
	{
		if(list[i]==x)
		{
			index=i;
			break;
		}
	}
	return index;
}
    
int main()
{
    int i, index, n, x;
    int a[MAXN];

    scanf("%d", &n);
    for( i = 0; i < n; i++ )
        scanf("%d", &a[i]);
    scanf("%d", &x);
    index = search( a, n, x );
    if( index != -1 )
        printf("index = %d\n", index);
    else
        printf("Not found\n");
            
    return 0;
}

/* 你的代码将被嵌在这里 */

