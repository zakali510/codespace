#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string s = get_string("Before ");
    printf("After: ");
    for (int i = 0; i < strlen(s); i++)
    if (s[i] >= 'a' &&  s[i] <= 'z')
    {
        printf("%c", s[i] - 32);
    }
    printf("\n");
}