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
	flag=1;//���ܷŵ�while���棬������һ��ΪСд��ĸ�Ļ�flag����Ϊ1
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
		for(int j=0;j<t;j++)//jҪС��t����֮ǰ�ı�  ��һ�����ֱ�Ӵ�������֮�����õڶ����֮ǰ�ı� 
		{//����������j<k�Ļ���һ�������� 
			if(s2[t]==s2[j])
			{z=1;break;}
		}
		if(z==0)
		{
			s3[i]=s2[t];//��ֵ��S3ʱ��Ҫ���±����洢���Ա�֤������������±��������� 
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
