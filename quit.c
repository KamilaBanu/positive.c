#include <stdio.h>
int main()
{
    char ch;
    puts("Typing Program");
    puts("press 'Q' to quit:");
    for(;;)
    {
        ch=getchar();
        if(ch=='Q')
        {
            break;
        }
    }
    return(0);
}

