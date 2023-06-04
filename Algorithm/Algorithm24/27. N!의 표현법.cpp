#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	int temp, inputNumber, j;

	scanf_s("%d", &inputNumber);

	vector<int> ch(inputNumber + 1);

	for (int i = 2; i <= inputNumber; i++)
	{
		temp = i;
		j = 2;
		while (1)
		{
			if (temp % j == 0)
			{
				temp = temp / j;
				ch[j]++;
			}
			else
				j++;

			if (temp == 1) break;
		}
	}
	printf("%d!=", inputNumber);

	for (int i = 2; i <= inputNumber; i++)
	{
		if (ch[i] != 0)
		{
			printf("%d", ch[i]);
		}
	}

	

	return 0;
}