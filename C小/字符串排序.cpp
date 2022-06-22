#include<stdio.h>
#define n 5
int main()
{
    int i,j;
    char a[n][80],t[80];
    for(i=0;i<n;i++)
    {
        scanf("%s",a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(strcmp(a[j],a[j+1])>0)
            {
                strcpy(t,a[j]);
                strcpy(a[j],a[j+1]);
                strcpy(a[j+1],t);
            }
        }
    }
    printf("After sorted:\n");
    for(i=0;i<n;i++)
    {
        printf("%s\n",a[i]);
    }
    return 0;
}


