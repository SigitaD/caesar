#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
      printf("Success\n");
      printf("%s\n", argv[1]);
      return 0;
    }

    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
}
