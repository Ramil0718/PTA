#include <stdio.h>

int CountDigit( int number, int digit )
{
	int ans=0;
	long temp;
	if(number<0)
		number=-number;
	do
	{
		temp=number%10;
		if(temp==digit)
			ans++;
		number=number/10;
	}while(number!=0);//��֪��Ϊʲôdo while���е���ֻ��while�Ͳ��� 
	return ans;
}
    
int main()
{
    int number, digit;

    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));
    
    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */

