#include <iostream>
#include<string.h> 
using namespace std;

int main(int argc, char *argv[])
{
	
	char s[81];
	cin.getline(s, 80);
	int i = 0;
	int pt = 0;
	for (i; i < (int)strlen(s)-1; i++)		//过滤掉最前面的正负号
	{
		if (s[i] == '+')
		{		
			continue;
		}
		else if (s[i] == '-')
		{
			s[0] = s[i];
			pt = 1;
		}
		else break;
	}

	for (i; i < (int)strlen(s)-1; i++)			//把符合的字符在字符串前面依次放置
	{
		if ((s[i] >= 'a'&&s[i] <= 'f') || (s[i] >= 'A'&&s[i] <= 'F') || (s[i] >= '0'&&s[i] <= '9'))
		{
			s[pt] = s[i];
			pt++;
		}
	}
	s[pt] = '\0';		//在处理好的字符串后面加入'\0'变成新的字符串
	cout << s << endl;
	int sum = 0;
	for (int j = 0; j < (int)strlen(s); j++)			//16进制转换成10进制
	{
		if (s[j] == '-')
		{
			cout << s[j];
			continue;
		}
		if (s[j] >= '0'&&s[j] <= '9')
			sum = sum * 16 + (s[j] - '0');
		else if(s[j]>='A'&&s[j]<='F')
			sum = sum * 16 + 10 + (s[j] - 'A');
		else
			sum = sum * 16 + 10 + (s[j] - 'a');
	}
	cout << sum << endl;

	


	return 0;
}
