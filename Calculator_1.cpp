#include<stdio.h>

int main()
{
    int a = 20;
    int b = 10;
    printf("****Arthimatic calculator****\n");
    int choice = -1;
    printf("Enter value of choice 1:Add 2:Sub 3:Prod 4:Mod and 5: div 6:Bitwise_AND 7:Bitwise_OR 8: Bitwise_XOR\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1: printf("add(a, b): %d\n", (a + b));
        break;
    case 2: printf("sub(a, b): %d\n", (a - b));
        break;
    case 3: printf("prod(a, b): %d\n", (a * b));
        break;
    case 4: printf("mod(a, b): %d\n", (a % b));
        break;
    case 5: printf("div(a, b): %f\n", ((float)a / b));
        break;
    case 6: printf("and(a, b): %d\n", (a & b));
		break;
    case 7: printf("or(a, b): %d\n", (a | b));
        break;
    case 8: printf("xor(a, b): %d\n", (a ^ b));
        break;
    default:printf("You hit invlaid choice!!!");
    }
    return 0;
}