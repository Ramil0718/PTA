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
	}while(number!=0);//不知道为什么do while就行但是只用while就不行 
	return ans;
}
    
int main()
{
    int number, digit;

    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));
    
    return 0;
}

/* 你的代码将被嵌在这里 */

