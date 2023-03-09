#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string s = get_string("Before ");
    for (int i = 0; i < strlens(s); i++)
    if (s[i] <= 'a' && >= 'z')
    {
        printf("c", s[i] toupper);
    }
}