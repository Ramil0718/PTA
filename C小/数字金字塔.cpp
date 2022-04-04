#include <stdio.h>

void pyramid( int n );

int main()
{    
    int n;

    scanf("%d", &n);
    pyramid(n);
    
    return 0;
}

/* 你的代码将被嵌在这里 */
void pyramid(int n)
{  for (int i=1;i<= n;i++)
    {for (int s=1;s<=n-i;s++)
        { printf(" ");}
   for (int t=1;t<=i;t++)
        { printf("%d ",i);}
      printf("\n");
 }
}
