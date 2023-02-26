#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z') // checks if character is lowercase
        {
            printf("%c", s[i] - 32); // converts all characters from lowercase to uppercase
        }
        else
        {
            printf("%c", s[i] + 32); // if the characters aren't lowercased it'll convert to uppercase
        }

    }
    printf("\n");
}