#include <stdio.h>

int reverse(int x)
{
	int result=0;
	int temp;

	while (x>0)
	{
		temp = x % 10;
		result = result * 10 + temp;
		x = x / 10;
	}

	return result;
}

bool isPrime(int x)
{
	bool flag = true;
	if (x == 1) return false;
	for (int i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			flag = false;
			break;
		}
	}
	return flag;
}

// 32 55 62 3700 250

int main()
{

	int inputNumber, temp, Numbers;

	scanf_s("%d", &inputNumber);

	for (int i = 1; i <= inputNumber; i++)
	{
		scanf_s("%d", &Numbers);
		temp = reverse(Numbers);
		if (isPrime(temp))
		{
			printf("%d ", temp);
		}
	}

	return 0;
}