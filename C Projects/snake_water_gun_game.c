#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
int snakeWaterGun(char you, char comp)
{
    //draw condition
    if (you == comp)
    {
        return 0;
    }
    //not-draw condition
    else if (you == 's' && comp == 'w')
    {
        return 1;
    }
    else if (you == 'g' && comp == 's')
    {
        return 1;
    }
    else if (you == 'w' && comp == 'g')
    {
        return 1;
    }
    else if (you != 's' && you != 'w' && you != 'g')
    {
        return 2;
    }
    else
    {
        return -1;
    }
}
int main()
{
loop:
    system("cls");
    char you, comp;
    srand(time(0));
    int number = rand() % 100 + 1;
    if (number < 33)
    {
        comp = 's';
    }
    else if (number > 33 && number < 66)
    {
        comp = 'w';
    }
    else
    {
        comp = 'g';
    }
    printf("\n\t <<=========<-:{ Snake | Water | Gun }:->==========>>");
    printf("\n ___________________________________________________________________\n");
    printf("\n\n //----------Game Rules----------//");
    printf("\n\n >> 1. Snake vs Water ;-> Snake Wins. ");
    printf("\n >> 2. Gun vs Water ;-> Water Wins. ");
    printf("\n >> 3. Snake vs Gun ;-> Gun Wins. ");
    printf("\n\n Press 's' for Snake. \n Press 'w' for water. \n Press 'g' for gun.");
    printf("\n\n Enter your choice => ");
    fflush(stdin);
    scanf("%c", &you);
    printf("\n ___________________________________________________________________\n");
    int result = snakeWaterGun(you, comp);
    if (result == 0)
    {
        printf("\n Game tie...! };-]");
    }
    else if (result == 1)
    {
        printf("\n You win...! }:-)");
    }
    else if (result == -1)
    {
        printf("\n You lose...! }:-{");
    }
    else
    {
        printf("\n Select only the mentioned character 's','w' or 'g'. ");
    }
    printf("\n\n >>>> You have choosed '%c' and computer has choosed '%c'.\n", you, comp);
    printf("\n ___________________________________________________________________\n");
    printf("\n >>>> Press 'Enter' to play again... ");
    getch();
    goto loop;
    return 0;
}