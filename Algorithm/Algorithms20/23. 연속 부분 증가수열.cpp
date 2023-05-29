#include <stdio.h>

int main()
{
	int inputNumber,previous,now,count, max = -2147000000;

	scanf_s("%d", &inputNumber);
	scanf_s("%d", &previous);

	count = 1;
	max = 1;
	for (int i = 2; i <= inputNumber; i++)
	{
		scanf_s("%d", &now);
		if (now >= previous)
		{
			count++;
			if (count > max)
			{
				max = count;
			}
			else count = 1;

			previous = now;
		}
	}

	printf("%d\n", max);
	
	return 0;
}