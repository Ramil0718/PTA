#include <stdio.h>
#include <stdlib.h>

int main() {
	int x,k=0,total,count=0,i,j;
    scanf("%d",&x);
    for(i=(x-3)/5;i>=1;i--)
    {
        for(j=(x-5*i-1)/2;j>=1;j--)
        {
            k=x-5*i-2*j;
            total=i+j+k;
            printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n",i,j,k,total);
            count++;
        }
    }
    printf("count = %d",count);
	return 0;
}

