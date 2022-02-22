#include <stdio.h>

int main(void)
{
	char ch;

	printf("문자 입력: ");
	ch = getchar();
	printf("입력한 문자의 아스키 코드 값: %d", ch);

	return 0;
}