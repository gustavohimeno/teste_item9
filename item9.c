#include <stdio.h>

//function for length calculation
int calc_length(char *str)
    {
    int total_length = 0;
    while(str[total_length] != '\0')
        {
        total_length++;
        }
    return total_length - 1;
    }


int main()
    {
    //variables declaration
    int lim = 1002;
    int length;
    char phrase[lim];
    
    //asks the user to type a string with maximum of 1000 characters
    puts("Type a phrase (max = 1000 characteres): ");
    
    //receives the string typed by the user
    if (fgets(phrase, sizeof(phrase), stdin) != NULL)
        {
        length = calc_length(phrase);
        printf("%d", length);
        };
    
    return 0;
    }
