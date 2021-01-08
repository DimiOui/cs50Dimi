#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    //Getting the textInput
    string textInput = get_string("Text : ");
    //Counting functions
    int lettercount = 0, wordcount = 1, sentencecount = 0;
    for (int i = 0, n = strlen(textInput); i < n; i++)
    {
        //Couting letters
        if (isalpha(textInput[i]))
        {
            lettercount++;
        }
        //Couting words
        if ((isspace(textInput[i]) || (textInput[i] == '"')) && isalpha(textInput[i + 1]))
        {
            wordcount++;
        }
        //Counting sentences
        if (textInput[i] == '.' || textInput[i] == '!' || textInput[i] == '?' || textInput[i] == '\0')
        {
            sentencecount++;
        }
    }
    //Coleman-Liau Indexing
    float L = (float)lettercount / (float)wordcount * 100, S = (float)sentencecount / (float)wordcount * 100;
    float index = 0.0588 * L - 0.296 * S - 15.8;
    //Printing the right answer
    //Answer if grade between 1 and 16 (excluded)
    if (index < 16 && index >= 0)
    {
        printf("Grade %i\n", (int) round(index));
    }
    //Answer if grade 16 or more
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    //Answer if grade 1 or minus
    else
    {
        printf("Before Grade 1\n");
    }
}
