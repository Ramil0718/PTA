#include<stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
 char s[81];
 int a[128]={0};
 gets(s);
 int i;
 for(i=0;i<strlen(s);i++){
  if(a[s[i]-' ']==0){
  a[s[i]-' ']++;
 }
 }
 for(i=0;i<128;i++){
  if(a[i]==1){
   printf("%c",' '+i);
  }
 }
 return 0;
}
