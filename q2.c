#include<stdio.h>

int verificaCaracteres(char *str);

int main(void) {
    char str[100];

    printf("Digite uma string: ");
    fgets(str, 100, stdin);

    if (verificaCaracteres(str) > 0)
        printf("A letra a/A aparece %d vezes da string", verificaCaracteres(str));
    else printf("A letra a/A nao aparece na string");

    return 0;
}

int verificaCaracteres(char *str)
{
    int freq = 0;
    for (int i = 0; str[i] != '\n'; i++)
    {
        if (str[i] == 'A' || str[i] == 'a')
        freq++;
    }

    return freq;
}
