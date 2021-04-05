#include <stdio.h>

//função para cálculo do comprimento de string
int calc_length(char *str);

int main()
    {
    //declaração de variáveis
    int lim = 1002;
    int length;
    char phrase[lim];
    
    //solicita que o usuário digite a string que deseja avaliar no máximo de 1000 caracteres
    puts("Type a phrase (max = 1000 characteres): ");
    
    //recebe a string digitada pelo usuário
    if (fgets(phrase, sizeof(phrase), stdin) != NULL)
        {
        length = calc_length(phrase);
        printf("%d", length);
        };
    
    return 0;
    }

int calc_length(char *str)
    {
    int total_length = 0;
    while(str[total_length] != '\0')
        {
        total_length++;
        }
    return total_length - 1;
    }
