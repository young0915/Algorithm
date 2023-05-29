#include <stdio.h>


int main()
{
	int Student[101];
	int studetnCount;
	int max;
	int anger = 0;
	scanf_s("%d", &studetnCount);

	for (int i = 1; i <= studetnCount; i++)
	{
		scanf_s("%d", &Student[i]);
	}

	max = Student[studetnCount];
	for (int i = studetnCount - 1; i >= 1; i--)
	{
		if (Student[i] > max)
		{
			max = Student[i];
			anger++;
		}
	}


	printf("%d", anger);
	return 0;
}