#include <stdio.h>
#include <algorithm>

int a[60], b[60];

//AbaAeCe
//baeeACA
int main()
{

	char str[100];
	scanf_s("%s", &str, 100);

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			a[str[i] - 64]++;
		}
		else
		{
			// ¼Ò¹®ÀÚ.
			a[str[i] - 70]++;
		}
	}
	
	scanf_s("%s", &str, 100);
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			b[str[i] - 64]++;
		}
		else
		{
			b[str[i] - 70]++;
		}
	}

	for (int i = 1; i <= 52; i++)
	{
		if (a[i] != b[i])
		{
			printf("NO");
			exit(0);
		}
	}

	printf("Yes");



	return 0;
}