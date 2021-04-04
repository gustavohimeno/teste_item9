#include <stdio.h>

//function for length calculation
int calc_length(char *str);

int main()
    {
    //variables declaration
    int lim = 1002;
    int length;
    char phrase[lim];
    
    //asks the user to input a phrase
    puts("Type a phrase (max = 1000 characteres): ");
    
    //receives user input
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
