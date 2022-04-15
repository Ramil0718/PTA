#include<stdio.h>

int main()
{
	int n,mid;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j]<a[j+1])
            {
                mid=a[j];
                a[j]=a[j+1];
                a[j+1]=mid;
            }
        }
    }
    for(int i=0;i<n-1;i++)
    	printf("%d ",a[i]);
    printf("%d",a[n-1]);
}
