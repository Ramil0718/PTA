#include<stdio.h>
int main()
{
	int num=0,t=0,mask=1;
	scanf("%d",&num);
	t=num;
	while(t>9){
		t/=10;
		mask*=10;
	}
	while(mask>0){
	 	printf("%d ",num/mask);      //ע�����һ���ո�Ҫ��Ҫ ����ĿҪ �е���Ŀ��Ҫ  
		num%=mask;
		mask/=10;
	} 
    return 0;
}

