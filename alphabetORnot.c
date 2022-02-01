//Character is an alphabet or not
#include <stdio.h>
main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
    {
        printf("%c is an alphabet",ch);
    }
    else
    {
        printf("%c is not an alphabet",ch);
    }
}