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
这一段理论上能过的，但是有一个样例运行超时，因为学的C不能用C++取消输入流所以就在CSDN找了个AC答案 
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
