#include <stdio.h>
int main()
{
    char    str[100];
   int countSp;
    int counter;
    countSp=0;
  printf("Enter a string: ");
    gets(str); 
    for(counter=0;str[counter]!=NULL;counter++)
    {
        if(str[counter]==' ')
            countSp++;
    }
printf("%d",Sp);
return 0;
}
 
