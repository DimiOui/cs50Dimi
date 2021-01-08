#include <cs50.h>
#include <stdio.h>

int main(void)
//ask for a heigh from 1 to 8
{
    int h;
    do
    {
        h = get_int("Height: ");
    }
    while (h < 1 || h > 8);
//General rule
    for (int i = h - 1; i >= 0; i--)
    {
//Rule defining the first backspaces        
        for (int j = i - 1; j >= 0; j--)
        {
            printf(" ");
        }
//Rule for the first row of #
        for (int j = h - 1 - i; j >= 0; j--)
        {
            printf("#");
        }
//Make the central spacing
        printf("  ");
//Rule for the second row of #        
        for (int j = h - 1 - i; j >= 0; j--)
        {
            printf("#");
        }
        printf("\n");
    }
}
