#include <cs50.h>
#include <stdio.h>

const int N = 3;

float average(int array[]); // creates a function named average that takes an array of integers

int main(void)
{ // this prints out an array[] of Score: three times
    int scores[N]; // const N = 3, repeats 3 times ((scores is name of array)) LOCAL DECLARATION
    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("Score: "); // i repeats 3 times because const int N = 3
    }
    if (scores[i] )
    printf("Average Score: %f\n", average(scores)); // average (scores) scores is array

}



float average(int array[]) // this gets the average of the score,
                           // and divides it by three
{
    int sum = 0; // sets sum at 0 and retrieves the value of all scores and divide by 3
    for (int i = 0; i < N; i++)
    {
        sum+=array[i];
    }
    return sum / (float) 3;
}
