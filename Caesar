#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argkey, string argv[])
{
    //check for single command-line argument
    if (argkey != 2)
    {
        printf("Usage : ./caesar key\n");
        return 1;
    }
    
    //check for numerical argument
    if isalpha(*argv[1])
    {
        printf("Usage : ./caesar key\n");
        return 1;
    }
    
    //check for non-negative integer
    int k = atoi(argv[1]);
    if (k < 0)
    {
        printf("cipher key must be positive\n");
        return 1;
    }
    else
    {
        //get text
        string plaintext = get_string("plaintext: ");
        //print ou cipher text
        printf("ciphertext: ");
        
        for (int i = 0, n = strlen(plaintext); i < n; i++)
        {
            //Caesar lower character
            if islower(plaintext[i])
            {
                printf("%c", (((plaintext[i] + k) - 97) % 26) + 97);
            }
            //Caesar upper character
            else if isupper(plaintext[i])
            {
                printf("%c", (((plaintext[i] + k) - 65) % 26) + 65);
            }
            //Caesar if neither then just print what it is
            else
            {
                printf("%c", plaintext[i]);
            }
        }
        printf("\n");
        return 0;
    }
}
