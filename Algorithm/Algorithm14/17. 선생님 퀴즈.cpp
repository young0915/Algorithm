#include <stdio.h>

int main()
{

	int inputNumber, sum = 0, answer, studentNumber;
	scanf_s("%d", &inputNumber);

	for (int i = 1; i <= inputNumber; i++)
	{
		scanf_s("%d %d", &studentNumber, &answer);
		sum = 0;
		for (int j = 1; j <= studentNumber; j++)
		{
			sum += j;
		}
		if (answer == sum)
		{
			printf("Yes\n");
		}
		else
			printf("No\n");

	}

	return 0;
}