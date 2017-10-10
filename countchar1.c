#include <stdio.h>
int main()
{
    char    str[100];
    int countD;
    int counter;
    countD=0;
  printf("Enter a string: ");
    gets(str); 
    for(counter=0;str[counter]!=NULL;counter++)
    {
        if(str[counter]>='0' && str[counter]<='9')
            countD++;
    }
 
    printf("\nDigits: %d",countD);
 
    return 0;
}
