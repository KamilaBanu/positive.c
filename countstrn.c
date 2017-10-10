#include <stdio.h>
#include <string.h>
void main()
{
   char str[100];
   int i = 0, s= 0;
   gets(str);
   for(i = 0; str[i] !='\0'; i++)
   {
      s = s + 1;
   }
   printf("%d", s);
   }
