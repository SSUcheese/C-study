#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c;
	scanf("%d.%d.%d", &a, &b, &c);
	printf("%004d.%02d.%02d", a, b, c);

	return 0;
}