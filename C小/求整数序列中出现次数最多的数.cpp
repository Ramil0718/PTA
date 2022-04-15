#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],max = -1,ji;
	for(int i=0;i<n;i++)//输入数组
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)//遍历数组找最多次的数字
	{
		int count=0;
		for(int j=0;j<n;j++)
		{
			if(a[i] == a[j])
			{
				count++;
			} 
		} 
		if(count>max)//记录下出现最多次数的数
		{
			max = count;
			ji = a[i];
		}
	}
	printf("%d %d",ji,max);//输出即可
 } 
