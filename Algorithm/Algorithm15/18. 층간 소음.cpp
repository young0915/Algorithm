#include <stdio.h>

int main()
{
	int count = 0;
	int max = -2147000000;
	int limitedMin;
	int limitedMax;
	int noiseIntensity;

	scanf_s("%d %d", &limitedMin, &limitedMax);

	for (int i = 1; i <= limitedMin; i++)
	{
		scanf_s("%d", &noiseIntensity);

		if (noiseIntensity > limitedMax)
		{
			count++;
		}
		else
			count = 0;

		if (count > max)
		{
			max = count;
		}
	}
	if (max == 0)
		printf("-1\n");
	else printf("%d\n", max);



	return 0;
}