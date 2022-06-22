#include <stdio.h>
#define MAXS 15


void StringCount(char*s)
	{
    	int letter1=0,letter2=0,digit=0,blank=0,other=0;
    	for(int i=0;i<strlen(s);i++)
		{
        	if(s[i]>='A'&&s[i]<='Z')
			{
        	    letter1++;
        	}
			else if(s[i]>='a'&&s[i]<='z')
			{
            	letter2++;
        	}
			else if(s[i]>='0'&&s[i]<='9')
			{
            	digit++;
        	}
			else if(s[i]==' ')
			{
            	blank++;
        	}
			else
			{
            	other++;
        	}
    }
    printf("%d %d %d %d %d",letter1,letter2,blank,digit,other);
}
void ReadString( char *s ); /* 由裁判实现，略去不表 */

int main()
{
    char s[MAXS];

    ReadString(s);
    StringCount(s);

    return 0;
}

/* Your function will be put here */

