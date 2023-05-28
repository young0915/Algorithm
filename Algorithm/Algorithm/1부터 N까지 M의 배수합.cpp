#include <iostream>

int main()
{
	int n, m = 0;

	std::cin >> n >> m;

	int sum = 0;
	for (int i = 0; i <= n; i++)
	{
		if (i % m == 0)
		{
			sum += i;
		}
	}

	std::cout << sum;
	return 0;
}
