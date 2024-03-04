#include <stdio.h>
int a = 1;

void toh(int n, int beg, int aux, int end)
{
    if (n >= 1)
    {
        toh(n - 1, beg, end, aux);
        printf("%d). %c to %c\n", a++, beg, end);
        toh(n - 1, aux, beg, end);
    }
}
int main()
{
    toh(3, 'A', 'B', 'C');
    return 0;
}

/*
<<--------------------->>
  Execution Explanation
<<--------------------->>

TOH(3,A,B,C)
    TOH(2,A,C,B)
        TOH(1,A,B,C)
            TOH(0,A,C,B) => FALSE
            PRINT : "A TO C"
            TOH(0,B,A,C) => FALSE
        PRINT : "A TO B"
        TOH(1,C,A,B)
            TOH(0,C,B,A) => FALSE
            PRINT  : "C TO B"
            TOH(0,A,C,B) => FALSE
    PRINT : "A TO C"
    TOH(2,B,A,C)
        TOH(1,B,C,A)
            TOH(0,B,A,C) => FALSE
            PRINT : "B TO A"
            TOH(O,C,B,A) => FALSE
        PRINT : "B TO C"
        TOH(1,A,B,C)
            TOH(0,A,C,B) => FALSE
            PRINT : "A TO C"
            TOH(O,B,A,C) => FALSE
*/