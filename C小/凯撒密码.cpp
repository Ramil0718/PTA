#include<stdio.h>
int main()
{
    char c[80];
    gets(c);
    int o,i;
    scanf("%d",&o);
    o=o%26;
    for(i=0;c[i]!='\0';i++)
    {
        if(c[i]>='A'&&c[i]<='Z')
        {
            if(c[i]+o>'Z')
            {
                c[i]='A'+(c[i]+o-1-'Z');
            }
            else if (c[i]+o<'A')
            {
                c[i]='Z'-('A'-(c[i]+o)-1);
            }
            else
                c[i]=c[i]+o;
        }
        if(c[i]>='a'&&c[i]<='z')
        {
            if(c[i]+o>'z')
            {
                c[i]='a'+(c[i]+o-1-'z');
            }
            else if (c[i]+o<'a')
            {
                c[i]='z'-('a'-(c[i]+o)-1);
            }
            else
                c[i]=c[i]+o;
        }
        
    }
    puts(c);
    return 0;
}
