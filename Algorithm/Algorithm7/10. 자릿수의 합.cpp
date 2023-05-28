#include <iostream>

int digit_sum(int x)
{
	int tmp, sum = 0;
	while (x>0)
	{
		tmp = x % 10;
		sum += tmp;
		x = x / 10;
	}
	return sum;
}

using namespace std;

int main()
{
	int inputCount, sum, max = -2147000000, result{}, inputNumber;

	cin >> inputCount;

	for (int i = 1; i <= inputCount; i++)
	{
		cin >> inputNumber;

		sum = digit_sum(inputNumber);

		if (sum > max)
		{
			max = sum;
			result = inputNumber;
		}
		else if (sum == max)
		{
			if (inputNumber > result)
			{
				result = inputNumber;
			}
		}
	}

	printf("%d", result);

	return 0;
}