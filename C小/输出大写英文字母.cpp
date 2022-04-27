#include<stdio.h>
int main()
{
	char s1[80],s2[80],s3[27];
	int i,k,flag;
	i=0;
	while((s1[i]=getchar())!='\n')
	{i++;}
	s1[i]='\0';
	i=0;k=0;
	flag=1;//不能放到while里面，如果最后一个为小写字母的话flag依旧为1
	while(s1[i]!='\0')
	{
		if(s1[i]>='A'&&s1[i]<='Z')
		{
			flag=0;s2[k]=s1[i];k++;
		}
		i++;
	}
	s2[k]='\0';
	i=0;
    
	for(int t=0;t<k;t++)
	{
		int z=0;
		for(int j=0;j<t;j++)//j要小于t，跟之前的比  第一项可以直接存起来，之后再用第二项和之前的比 
		{//上条语句如果j<k的话，一项都不会输出 
			if(s2[t]==s2[j])
			{z=1;break;}
		}
		if(z==0)
		{
			s3[i]=s2[t];//赋值给S3时，要用新变量存储，以保证新数组里的数下标是连续的 
			i++;
		}
	}
	s3[i]='\0';
	
	if(flag==0)
	puts(s3);
	else
	printf("Not Found");
	return 0;
}
