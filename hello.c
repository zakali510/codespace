#include <cs50.h>
#include <stdio.h>
#include <ctype.h>

const int N = 3;

float average(int array[]);

int main(void)
{
    int scores[N];
    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("Score: ");
        while (!isdigit(getchar()))
        {
            printf("Invalid input. Please enter a digit.\n");
            return 1;
        }
    }
    printf("Average Score: %f\n", average(scores));
    return 0;
}

float average(int array[])
{
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += array[i];
    }
    return sum / (float) N;
}

