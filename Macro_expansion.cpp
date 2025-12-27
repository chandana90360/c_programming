#include <stdio.h>
#define num1 10
#define num2 20

#define SUM(x,y) ((x)+(y))
#define DIFF(x,y) ((x)-(y))
#define PROD(x,y) ((x)*(y))
#define MOD(x,y) ((x)%(y))
#define DIV(x,y) (((float)x)/(y))

int main() {
	int _arg1 = num1;
	int _arg2 = num2;
	printf("sum(_arg1, _arg2): %d\n", SUM(_arg1, _arg2));
	printf("diff(_arg1, _arg2): %d\n", DIFF(_arg1, _arg2));
	printf("prod(_arg1, _arg2): %d\n", PROD(_arg1, _arg2));
	printf("mod(_arg1, _arg2): %d\n", MOD(_arg1, _arg2));
	printf("div(_arg1, _arg2): %f\n", DIV(_arg1, _arg2));
	return 0;
}
