#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

int order(int n)
{
    int count = 1;
    if (n > 999)
    {
        while ((n /= 10) > 0)
        {
            count++;
        }
        return count;
    }
    else
        return 3;
}

int main()
{
    /*-----------------------------------------------------------------*/
    // Program to find the sum of first n numbers
    /*-----------------------------------------------------------------*/

    // int n, sum = 0;
    // printf("Enter the number : ");
    // scanf("%d", &n);
    // // sum = (n * (n + 1)) / 2;   //--> Direct Formula
    // while (n > 0)
    // {
    //     sum += n;
    //     n--;
    // }
    // printf("\nThe sum is : %d", sum);

    /*-----------------------------------------------------------------*/
    // Program to find prime number
    /*-----------------------------------------------------------------*/

    // int n;
    // printf("Enter the number : ");
    // scanf("%d", &n);

    // if (n == 1)
    // {
    //     printf("Smallest prime number is 2", n);
    // }
    // else
    // {
    //     for (int i = 2; i <= n/2; i++)
    //     {
    //         if (n % i == 0)
    //         {
    //             printf("%d is not a prime number", n);
    //             break;
    //         }
    //     }
    //     printf("%d is a prime number", n);
    // }

    /*-----------------------------------------------------------------*/
    // Armstrong Number
    /*-----------------------------------------------------------------*/

    // int temp = 0;
    // printf("\nArmstrong Number from 0 to 500 : ");
    // for (int i = 1; i < 2000; i++)
    // {
    //     temp = i;
    //     // printf("\nThe value of i : %d", i);
    //     int arm = 0;
    //     while (temp > 0)
    //     {
    //         arm += pow((temp % 10), order(i));
    //         temp /= 10;
    //         // temp = temp1 % 10;
    //         // temp1 = temp1 / 10;
    //         // arm = arm + pow(temp, 3);

    //         // printf("\n temp : %d", temp);
    //         // printf("\n arm : %d", arm);
    //         // printf("\n temp1 : %d", temp1);
    //     }
    //     // printf("\n %d : arm : %d", i, arm);
    //     if (arm == i)
    //         printf("%d ", i);
    // }

    /*-----------------------------------------------------------------*/
    //

    /*-----------------------------------------------------------------*/

    return 0;
}