#include <stdio.h>


int MonthDays(int year, int month)
{
	int days;	
	switch(month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			days = 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			days = 30;
			break;
		case 2:
			if(year%4==0 && year%100!=0 || year%400==0)
			{
				days = 29;
			}
			else
			{
				days = 28;
			}
			break;	
	}			
	return days;		
} //第一遍打忘了switch，我是傻逼 

int main()
{
    int ndays, month, year;

    scanf("%d", &year);
    for(month = 1; month <= 12; month++){
        ndays = MonthDays(year, month);
        printf("%d ", ndays);
    }

    return 0;
}

/* 你的代码将被嵌在这里 */

