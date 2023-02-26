#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");
    for (int i = 0; i < strlens(s); i++)
    {
        if (s[i]) >= 'a' && s[i] <= 'z' // checks if character is lowercase
        {
            printf("After: %s\n", )
        }
    }
}