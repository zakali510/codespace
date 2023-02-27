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
            printf("%c", toupper(s[i])); // converts all characters from lowercase to uppercase
        }
    printf("\n");
}