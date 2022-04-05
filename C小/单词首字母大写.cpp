#include<stdio.h>
int main()
{
    int c=0;
    char ch;    
    do
	{
        c=0;
    	do
		{
        	ch=getchar();
        	if(ch>='a'&&ch<='z'&&c==0)
			{
            	ch=ch+'A'-'a';
        	}
        	c++;
			putchar(ch);
    	}while(ch!=' '&&ch!='\n');
    }while(ch!='\n');
}
