#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);
    char str[n][80];
    int j,max=0;//j是记录最长串的位置，max是记录最长长度 
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
