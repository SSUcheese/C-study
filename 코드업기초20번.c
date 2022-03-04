#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b;
	scanf("%d-%d", &a, &b);
	printf("%06d%d", a, b);

	return 0;
}