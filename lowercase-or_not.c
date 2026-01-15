#include <stdio.h>
int main()
{
    char ch = 'a';
    printf("The character is %c\n", ch);
    printf("The value of character is %d\n", ch);
    // 97,122
    if (ch >= 97 && ch <= 122)
    {
        printf("This character is lowercase");
    }
    else
    {
        printf("this character is not upercase");
    }
    return 0;
}
