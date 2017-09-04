#include <stdio.h>

int main()
{
	int i;
	int j;
	int num;
	printf("N을 입력하세요 :");
	scanf("%d", &num);
	for (i = 0; i < num; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (num - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=0; i< num -1; i++)
	{

		for (j = 1; j <= num -i-2; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= 2 * (i + 1)+1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}