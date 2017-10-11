#include<stdio.h>
int main()
{
    char str1[5],str2[5];
int i,temp = 0;
gets(str1);
gets(str2);
for(i=0; (str1[i]!='\0')||(str2[i]!='\0'); i++)
{
if(str1[i] != str2[i])
{
temp = 1;
break;
}
}
if(temp == 0)
printf("Both strings are same.");
else
printf("Both strings not same.");
    return 0;
}
