#include <cs50.h>
#include <stdio.h>

const int N = 3;

float average(int array[]);

int main(void)
{ // this prints out Score: three times
    int scores[N];
    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("Score: ");
    }
    printf("Average Score: %f\n", average(scores));
}

float average(int array[]) // this gets the average of the score,
                           // and divides it by three
{
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum+=array[i];
    }
    return sum / (float) 3;
}
