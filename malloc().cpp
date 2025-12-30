#include<stdio.h>
#include<stdlib.h>

int main() {
	int* ptr = (int*)malloc(4);
	if (ptr) {
		*ptr = 10;
	}

	int* ptr1 = (int*)malloc(20);
	int i = 0;
	for (; i < 5; i++)
	{
		*ptr1 = (i + 2);
		printf("ptr1[%d]:%d-> ", i, ptr1[i]);
	}
	printf("\n");
}