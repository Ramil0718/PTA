#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);
    char str[n][80];
    int j,max=0;//j�Ǽ�¼�����λ�ã�max�Ǽ�¼����� 
    for(int i=0;i<n;i++)
    {
    	scanf("%s",&str[i]);
    	if(strlen(str[i])>max)
    	{
    		max=strlen(str[i]);
    		j=i;
		}
	}
	printf("The longest is: %s\n",str[j]);
}
