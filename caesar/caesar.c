#include <cs50.h>
#include <stdio.h>

int check_key(string k);
string decrypt(string text, int key);

int main(int argc, string argv[])
{
    string plaintext = get_string("plaintext: ");
    printf("%i\n",argc);
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    string ciphertext = decrypt(plaintext, argc);

    printf("ciphertext: ");
}

int check_key(string k)
{
    char current;
    int digits = 0;
    for (int i = 0, len = strlen(string); i < len; i++)
    {
        current = string[i];
        if is_digit(current)
        {
            digits 
        }
    }
}