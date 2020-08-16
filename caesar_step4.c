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

        int value = atoi(argv[1]);
        printf("%i\n", value);

        string s = get_string("plaintext: \n");

        for (int i = 0; i < strlen(s); i++)
        {
            printf("%c\n", s[i] + 1);
        }
        return 0;
    }

    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
}