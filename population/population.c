#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start;
    do
    {
        start = get_int("start population size:  ");

    }
    while (start < 9);

    // TODO: Prompt for end size
    int end;
    do
    {
        end = get_int("end population size:  ");

    }
    while (end < start);

    // TODO: Calculate number of years until we reach threshold
    int years = 0;
    while (start < end)
    {
       start = start + (start / 3) - (start / 4);
       years = years + 1;
    }

    // TODO: Print number of years
    printf("Years: %i", years);
}
