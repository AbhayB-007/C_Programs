#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    system("cls");
    int number, guess, no_of_guess = 1;
    srand(time(0)); //Initializing Random Function 
    number = rand()%100 + 1;
    printf("\n\n A random number is generated by the computer }:-]");
    printf("\n\n Are you ready to guess it correctly...? ");
    printf("\n\n >> Enter your Guess between 1 to 100 \n\n --> ");
    scanf("%d", &guess);
    while (1)
    {
        if (number > guess)
        {
            printf("\n\n '%d' is lower than the exact one \\__(* _ *)__/ ", guess);
        }
        else if (number < guess)
        {
            printf("\n\n '%d' is higher than the exact one \\__(* _ *)__/", guess);
        }
        else if (number==guess && no_of_guess==1)
        {
            printf("\n\n Brilliant Guess...! }:-)");
            printf("\n\n You have succesfully Guessed it correctly...! ");
            printf("\n\n Random Number generated by the Computer is -->> %d", number);
            printf("\n\n You guessed it in just '%dst' attempt \n", no_of_guess);
            break;
        }
        else
        {
            printf("\n\n Bang on...! \n\n You have succesfully Guessed it correctly ");
            printf("\n\n Random Number generated by the Computer is -->> %d", number);
            printf("\n\n You guessed it in '%d' attempts \n", no_of_guess);
            break;
        }
        printf("\n\n >> Enter your Guess again between 1 to 100 \n\n --> ");
        scanf("%d", &guess);
        no_of_guess++;
    } 
    return 0;
}