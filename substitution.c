#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 26

char return_char(char c);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("./substitution key\n");
        return 1;
    }

    if (strlen(argv[1]) < MAX)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }

    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if(!isalpha(argv[1][i]))
        {
            printf("Key must only contain alphabetical characters.\n");
            break;
            return 1;
        }
        else
        {
            argv[1][i] = tolower(argv[1][i]);
        }
    }

    for (int i = 0, j = strlen(argv[1]); i < j; i++)
   {
      for (int k = i+1; k < j; k++)
      {
        if (toupper(argv[1][i]) == toupper(argv[1][k]))
        {
            printf("Key must not contain repeated characters.\n");
            return 1;
        }
      }
   }

    string message = get_string("plaintext: ");
    printf("ciphertext: ");

    for (int i = 0; i < strlen(message); i++)
    {
        if(isalpha(message[i]))
        {
            int n = (int) return_char(message[i]);
            if(islower(message[i]))
            {
                printf("%c", argv[1][n]);
            }
            else
            {
                printf("%c", toupper(argv[1][n]));
            }
        }
        else
        {
            printf("%c", message[i]);
        }
    }
    printf("\n");
    return 0;
}

char return_char(char c)
{
    if(isalpha(c))
    {
        if(isupper(c))
        {
            c = c - 'A';
        }
        else if (islower(c))
        {
            c = c - 'a';
        }
    }
    return c;
}