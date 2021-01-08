#include <stdio.h>
#include <cs50.h>
#include <math.h>


int main(void)
{

//Prompt user for an amount of change
    float n;
    do
    {
        n = get_float("How much change is owed for : (in $)\n");
    
//Verify if the float is positive
    }
    while (n < 0);

//Multiply 'n' by 100 to avoid float imprecisions
    int cent = round(n * 100);

// Initialize the number of quarters (zero initially)
    int quarters = 0;

    while (cent >= 25)
    {
        quarters++;
        cent = cent - 25;
    }

// Initialize and calculate the number of dimes (zero initially)
    int dimes = 0;
    
    while (cent >= 10)
    {
        dimes++;
        cent = cent - 10;
    }

// Initialize and calculate the number of nickels (zero initially)
    int nickels = 0;
    
    while (cent >= 5)
    {
        nickels++;
        cent = cent - 5;
    }

// Initialize and calculate the number of pennies (zero initially)
    int pennies = 0;
    
    while (cent >= 1)
    {
        pennies++;
        cent = cent - 1;
    }

//Print the results
    printf("%i quarter(s)\n", quarters);
    printf("%i dime(s)\n", dimes);
    printf("%i nickel(s)\n", nickels);
    printf("%i penny(ies)\n", pennies);
}
