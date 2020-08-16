#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int main(int argc, string argv[])
{

    // int l = strlen(argv[1]);
    int key;

//checking if the key is valid
    if ( argc == 2)
    {
        //printf("Sucess\n %s\n", argv[1]);
        for (int i = 0; i < strlen(argv[1]); i ++)
        {
            if ( isdigit(argv[1][i]) == 0)
            {
                printf("Usage: %s key\n", argv[0]);
                return 1;
            }
        }


    key = atoi(argv[1]);
//printf("Sucess\n %i\n", key);

//getting input
        string p_text = get_string("plaintext: ");
        printf("ciphertext: ");

//encrypting
        int pl = strlen(p_text);
        string text = p_text;

        for (int i = 0; i < pl; i++)
        {
            if (isupper(text[i])) //for uppercace letters
            {
                printf("%c", (((text[i] + key - 64) % 26) + 64));
                // continue;
            }
            else if (islower(text[i])) //for lowercase letters
            {
                printf("%c", (((text[i] + key - 96) % 26) + 96));
                // continue;
            }
            else //for other symbols
            {
                printf("%c", text[i]);
            }



        }
        printf("\n");
        return 0;
    }

    else
    {
        printf("Usage: %s key\n", argv[0]);
        return 1;
    }

}