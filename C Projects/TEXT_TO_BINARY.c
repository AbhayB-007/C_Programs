                        // IN PROGRESS
                         
#include <stdio.h>
#include <string.h>

int main()
{
    char str[30];
    printf("\nEnter a Line : ");
    gets(str);
    // printf("%d ",str[0]);
    // printf("%d ",str[1]);
    // printf("%d ",str[2]);
    // printf("%d ",str[3]);
    // printf("%d ",str[4]);

    int bin[16][16];
    int len = strlen(str);
    int len2 = 0;
    ;
    printf("\n\n");
    for (int i = 0; str[i] != '\0'; i++)
    {
        int n = (int)str[i];
        for (int j = 0; n > 0; j++)
        {
            bin[i][j] = n % 2;
            n /= 2;
        }
    }


    return 0;
}