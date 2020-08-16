#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int main(int argc, string argv[])
{
    if (argc == 2)
    {
        for (int i = 0; i < strlen(argv[1]); i++)
        {
            if (isdigit(argv[1][i]) == 0)
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }
        printf("Success\n");

        int value = atoi(argv[1]);
        printf("%i\n", value);
        return 0;
    }

    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
}