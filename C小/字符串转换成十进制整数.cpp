#include <iostream>
#include<string.h> 
using namespace std;

int main(int argc, char *argv[])
{
	
	char s[81];
	cin.getline(s, 80);
	int i = 0;
	int pt = 0;
	for (i; i < (int)strlen(s)-1; i++)		//���˵���ǰ���������
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

	for (i; i < (int)strlen(s)-1; i++)			//�ѷ��ϵ��ַ����ַ���ǰ�����η���
	{
		if ((s[i] >= 'a'&&s[i] <= 'f') || (s[i] >= 'A'&&s[i] <= 'F') || (s[i] >= '0'&&s[i] <= '9'))
		{
			s[pt] = s[i];
			pt++;
		}
	}
	s[pt] = '\0';		//�ڴ���õ��ַ����������'\0'����µ��ַ���
	cout << s << endl;
	int sum = 0;
	for (int j = 0; j < (int)strlen(s); j++)			//16����ת����10����
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
