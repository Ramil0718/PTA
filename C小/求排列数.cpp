#include<stdio.h>
#include<math.h>

double fact(int n)
{
	double ans=1;
	for(int i=1;i<=n;i++)
	{
		ans*=i;
	}
	return ans;
}

int main()
{    
    int m,n;
    double result;
	scanf("%d%d",&m,&n);
    if(m>0&&n>0&&m<=n)
	{
        result=fact(n)/fact(n-m);
        printf("result = %.0f\n",result);    
    }
}
