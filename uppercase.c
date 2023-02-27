#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");
    for (int i = 0; i < strlen(s); i++) // a loop that repeats for every character inputted by user
    {
        if (islower(s[i]) ) // checks if character is lowercase
        {
            printf("%c", toupper(s[i])); // converts all characters from lowercase to uppercase
        }
        else
        {
            printf("%c", isupper(s[i])); // if the characters aren't lowercased it'll convert to uppercase
        }

    }
    printf("\n");
}