#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	char word[30];
	scanf("%s", &word);

	for (i = 0; i < strlen(word); i++)
	{
		printf("\'%c\'\n", word[i]);
	}
}