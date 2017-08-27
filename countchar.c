#include <stdio.h>
int main()
{
    char    str[100];
    int countD,countA,countS,countSp;
    int counter;
    countD=countA=countS=countSp=0;
  printf("Enter a string: ");
    gets(str); 
    for(counter=0;str[counter]!=NULL;counter++)
    {
        if(str[counter]>='0' && str[counter]<='9')
            countD++;
        else if((str[counter]>='A' && str[counter]<='Z')||(str[counter]>='a' && str[counter]<='z'))
            countA++;
        else if(str[counter]==' ')
            countSp++;
        else
            countS++;
    }
 
    printf("\nDigits: %d \nAlphabets: %d \nSpaces: %d \nSpecial Characters: %d",countD,countA,countSp,countS);
 
    return 0;
}
