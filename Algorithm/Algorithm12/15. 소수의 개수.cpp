#include <stdio.h>

int main()
{
	int inputNumber, flag, count = 0;

	scanf_s("%d", &inputNumber);

	for (int i = 2; i <= inputNumber; i++)
	{
		flag = 1;
		for (int j = 2; j*j <= i; j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			count++;
		}
	}
	printf("%d\n", count);

	return 0;
}