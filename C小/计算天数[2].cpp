#include<stdio.h>


int day_of_year(year, month, day)
{
	int sum=0;
    int a[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int b[12] = {31,29,31,30,31,30,31,31,30,31,30,31}; 
    if(year%4==0&&year%100!=0||year%400==0)
	{ 
        for(int i=0;i<month-1;i++)
		{
            sum+=b[i];
        }
    }
	else
	{
        for(i=0;i<month-1;i++)
		{
            sum+=a[i]; 
        }
    }    
    sum+=day;
    return sum;
}

int main() 
{
    int day,month,year;
    scanf("%d%d%d",&year,&month,&day);
    printf("%d\n",day_of_year(year,month,day));
}
