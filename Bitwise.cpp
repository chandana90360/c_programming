#include <stdio.h>
#include <math.h>
int main()
{
	int arg1 = 8;
	int arg2 = 3;

	printf("(arg1 & arg2): %d\n", (arg1 & arg2));
	printf("(arg1 | arg2): %d\n", (arg1 | arg2));
	printf("(arg1 ^ arg2): %d\n", (arg1 ^ arg2));
	printf("~arg2: %d\n", ~arg2);
	printf("(arg1<<2): %d\n", (arg1 << 2));
	printf("(arg1>>2): %d\n", (arg2 >> 2));

	return 0;
}