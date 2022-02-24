#include <stdio.h>

void input_nums(int* lotto_nums);
void print_nums(int* lotto_nums);


int main(void)
{
	int lotto_nums[6];

	input_nums(lotto_nums);
	print_nums(lotto_nums);
	
	return 0;
}

void input_nums(int* lotto_nums)
{
	int num;
	
	for (int i = 0; i < 6; i++)
	{
		int dup = 0;
		printf("숫자를 입력하세요: ");
		scanf("%d", &num);
		for (int s = 0; s < i; s++)
		{
			if (num == lotto_nums[s])
			{
				dup = 1;
				
				break;
			}
		}

		if (dup == 1)
		{
			printf("같은 숫자 ㄴㄴ임\n");
			i--;
		} 
		else
		{
			lotto_nums[i] = num;
		}
	}
}

void print_nums(int* lotto_nums)
{
	for (int i = 0; i < 6; i++)
	{
		printf("%5d", lotto_nums[i]);
	}
}