#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;

    printf("Enter a character\n");
    scanf("%c", &ch);

    if( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf(" %c Character is a vowel");
    }
    else
    {
        printf("%c Character is a consonant");
    }

}