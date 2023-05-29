#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int inputNumber, now, pre, pos;

	scanf_s("%d", &inputNumber);
	vector<int> check(inputNumber);

	scanf_s("%d", &pre);

	for (int i = 1; i < inputNumber; i++)
	{
		scanf_s("%d", &now);
		pos = abs(pre - now);

		if (pos > 0 && pos < inputNumber&& check[pos]==0)
		{
			check[pos] = 1;
		}
		else
		{
			printf("No\n");
			return 0;
		}
		pre = now;
	}

	printf("Yes\n");


	return 0;
}