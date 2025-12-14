#include <stdio.h>

void swapArgs(int* x, int* y) //Called Function
{
    int temp = 0; //x and y are called formal arguments
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() //Calling Function
{
    int arg1 = 10;
    int arg2 = 30;

    printf("Before swapping\n");
    printf("arg1: %d arg2:%d\n", arg1, arg2);

    //Function invoking statement
    swapArgs(&arg1, &arg2); //arg1 and arg2 are actual arguments

    printf("After swapping\n");
    printf("arg1: %d arg2:%d\n", arg1, arg2);

    return 0;
}