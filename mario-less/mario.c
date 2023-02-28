#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do //ask for height of the pyramid
    {
        height = get_int("height? ");
    }
    while (height < 1 || height > 8);

    for (int i = 0; i < height ; i++) //print number of row
    {
        for (int q = height - i - 1; q > 0; q--) //print number of spaces
        {
            printf(" ");
        }
        for (int j = 0; j < i + 1 ; j++) //print number of #
        {
            printf("#");
        }
        printf("\n");
    }
}