#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int main(int argc, string argv[])
{
    //Patikrina, ar ivestas tik vienas command-line argumentas. Jei taip, ieina i "for" loop'a.
    if (argc == 2)
    {
        //Patikrina, ar ivestas argumentas yra sudarytas tik is skaiciu.
        for (int i = 0; i < strlen(argv[1]); i++)
        {
            if (isdigit(argv[1][i]) == 0)
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }
        //Jei patikrinus aisku, kad argumentas sudarytas tik is skaiciu, argumenta is stringo (t.y. char), pavercia int, nes su juo reikes atlikti matematinius veiksmus.
        int value = atoi(argv[1]);
        // printf("%i\n", value);

        //Vartotojo papraso ivesti plaintext.
        string s = get_string("plaintext: ");
        printf("ciphertext: ");

        for (int i = 0; i < strlen(s); i++)
        {
            //Patikrina, ar ivestas plaintext yra raides. Jei taip, tikrina sekanti "if".
            if (isalpha(s[i]))
            {
                //Patikrina, ar raide yra didzioji. Jei taip, pavercia ja i ABC indeksa, atlieka sifravima pagal caesar formule (pastumia raide per "key" kieki), ja isspausdina.
                if (isupper(s[i]) != 0)
                {
                    int abc = s[i] - 64;
                    int c = (abc + value) % 26;
                    int ascii = c + 64;
                    printf("%c", ascii);
                }

                //Patikrina, ar raide yra mazoji. Jei taip, pavercia ja i ABC indeksa, atlieka sifravima pagal caesar formule (pastumia raide per "key" kieki), ja isspausdina.
                else if (islower(s[i]) != 0)
                {
                    int abc = s[i] - 96;
                    int c = (abc + value) % 26;
                    int ascii = c + 96;
                    printf("%c", ascii);
                }
            }

            //Jei plaintext simbolis nera raide, ji atspausdina jo nepakeites.
            else
            {
                printf("%c", s[i]);
            }
        }
        printf("\n");
        return 0;
    }

    //Jei ivestas command-line argumentas yra ne vienas, ismeta pranesima.
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
}