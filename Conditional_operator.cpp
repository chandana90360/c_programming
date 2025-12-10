#include <stdio.h>
#include <math.h>
int main()
{
    int arg1 = 10;
    int arg2 = 20;
    int result = arg1 > arg2 ? arg1 : arg2;
    printf("result: %d\n", result);


    arg1 = 30;
    result = arg1 > arg2 ? arg1 : arg2;
    printf("result: %d\n", result);
    return 0;
}