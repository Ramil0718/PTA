/*#include<stdio.h>

int main()
{
	char n;
	int cnt=0;
	do
	{
		scanf("%c",&n);
		if('0'<=n&&n<='9')
			cnt++;
	}while(n!='\n');
	printf("%d",cnt);
}
��һ���������ܹ��ģ�������һ���������г�ʱ����Ϊѧ��C������C++ȡ�����������Ծ���CSDN���˸�AC�� 
*/

#include<stdio.h>
int main(){
    int num,count=0;
    scanf("%d",&num);
    do{
        count++;
        num=num/10;
    }while(num!=0);
    printf("%d\n",count);
}
