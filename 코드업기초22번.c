#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char sen[2000];
	fgets(sen, 2001, stdin);
	printf("%s", sen);
}